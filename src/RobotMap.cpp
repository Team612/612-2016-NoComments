// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.

#include "RobotMap.h"
#include "LiveWindow/LiveWindow.h"

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION
std::shared_ptr<Talon> RobotMap::drivetrainTalon1;
std::shared_ptr<Talon> RobotMap::drivetrainTalon2;
std::shared_ptr<Talon> RobotMap::drivetrainTalon3;
std::shared_ptr<Talon> RobotMap::drivetrainTalon4;
std::shared_ptr<RobotDrive> RobotMap::drivetrainRobotDrive;
std::shared_ptr<Servo> RobotMap::shooterLeverServo1;
std::shared_ptr<CANTalon> RobotMap::armAdjust;
std::shared_ptr<AnalogInput> RobotMap::shooterLeverDetect;
std::shared_ptr<Servo> RobotMap::ShifterServo1;
std::shared_ptr<Servo> RobotMap::ShifterServo2;

// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION

void RobotMap::init()
{
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
	LiveWindow *lw = LiveWindow::GetInstance();

	drivetrainTalon1.reset(new Talon(0));
	lw->AddActuator("Drivetrain", "Talon1", drivetrainTalon1);

	drivetrainTalon2.reset(new Talon(1));
	lw->AddActuator("Drivetrain", "Talon2", drivetrainTalon2);

	drivetrainTalon3.reset(new Talon(2));
	lw->AddActuator("Drivetrain", "Talon3", drivetrainTalon3);

	drivetrainTalon4.reset(new Talon(3));
	lw->AddActuator("Drivetrain", "Talon4", drivetrainTalon4);

	drivetrainRobotDrive.reset(
			new RobotDrive(drivetrainTalon1, drivetrainTalon2,
					drivetrainTalon3, drivetrainTalon4));

	shooterLeverServo1.reset(new Servo(2));
	lw->AddActuator("ShooterLever", "LeverServo1", shooterLeverServo1);

	armAdjust.reset(new CANTalon(4));
	lw->AddActuator("Arm", "Arm Motor", armAdjust);

	shooterLeverDetect.reset(new AnalogInput(1));
	lw->AddActuator("ShooterLever", "Ball Detector IR", shooterLeverDetect);

	drivetrainRobotDrive->SetSafetyEnabled(true);
	drivetrainRobotDrive->SetExpiration(0.1);
	drivetrainRobotDrive->SetSensitivity(0.5);
	drivetrainRobotDrive->SetMaxOutput(1.0);
	// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
}
