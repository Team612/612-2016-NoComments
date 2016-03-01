#include <Commands/Shooter/ShooterControl.h>
#include "Robot.h"

ShooterControl::ShooterControl()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
    Requires(Robot::shooterwheels.get());
    Requires(Robot::shooterlever.get());
    fired = false;
    firing = false;
}

// Called just before this Command runs the first time
void ShooterControl::Initialize()
{
	Robot::shooterwheels->SetWheelSpeed(0.0f);
    Robot::shooterlever->SetNeutral();
}

// Called repeatedly when this Command is scheduled to run
void ShooterControl::Execute()
{
    auto gunner = Robot::oi->getGunner()->GetRawAxis(1);
    if(gunner > TOLERANCE)
    {
    	printf("Fire\n");
        Fire();
    }
    else if (gunner < -TOLERANCE)
    {
    	printf("Intake\n");
        Intake();
    }
    else
    {
    	printf("Stop\n");
        Stop();
    }

    if(fired)
    {
        if(Robot::shooterlever->AtSetPosition())
        {
            firing = false;
            fired = false;
            Robot::shooterlever->SetNeutral();
        }
    }
    else if(firing)
    {
        if(Robot::shooterwheels->UpToSpeed())
        {
            Robot::shooterlever->SetPush();
            fired = true;
        }
    }
    /*
    if(Robot::shooterwheels->UpToSpeed())
    {
        Robot::shooterlever->SetPush();
        this->fired = true;
    }*/
}

// Make this return true when this Command no longer needs to run execute()
bool ShooterControl::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void ShooterControl::End()
{
	Robot::shooterwheels->Disable();
	Stop();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ShooterControl::Interrupted()
{
    End();
}

void ShooterControl::Fire()
{
	Robot::shooterwheels->Enable();
    Robot::shooterlever->SetNeutral();
    Robot::shooterwheels->SetWheelSpeed(RobotMap::flywheelShootSpeed);
    firing = true;
}

void ShooterControl::Intake()
{
	Robot::shooterwheels->Enable();
    Robot::shooterlever->SetNeutral();
    Robot::shooterwheels->SetWheelSpeed(RobotMap::flywheelIntakeSpeed);
}

void ShooterControl::Stop()
{
    Robot::shooterwheels->SetWheelSpeed(0.0f);
    Robot::shooterwheels->Disable();
}