// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.

#ifndef _ROBOT_H
#define _ROBOT_H

#include "WPILib.h"
#include "Commands/Command.h"
#include "RobotMap.h"
#include "LiveWindow/LiveWindow.h"
#include "Commands/ArmMove.h"

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "Commands/Autonomous.h"
#include "Subsystems/Arm.h"
#include "Subsystems/Drivetrain.h"
#include "Subsystems/ShooterWheels.h"
#include "Subsystems/ShooterRotation.h"
#include "Subsystems/ShooterLever.h"

// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "OI.h"

class Robot: public IterativeRobot
{
public:
	std::unique_ptr<Command> autonomousCommand;
	std::unique_ptr<Command> armMoveCommand;
	static std::unique_ptr<OI> oi;
	LiveWindow *lw = LiveWindow::GetInstance();
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	static std::shared_ptr<Drivetrain> drivetrain;
	static std::shared_ptr<ShooterLever> shooterlever;
	static std::shared_ptr<ShooterRotation> shooterrotation;
	static std::shared_ptr<ShooterWheels> shooterwheels;
	static std::shared_ptr<Arm> arm;
	// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	virtual void RobotInit();
	virtual void DisabledInit();
	virtual void DisabledPeriodic();
	virtual void AutonomousInit();
	virtual void AutonomousPeriodic();
	virtual void TeleopInit();
	virtual void TeleopPeriodic();
	virtual void TestPeriodic();
};
#endif
