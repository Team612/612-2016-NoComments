// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.

#ifndef ARM_H
#define ARM_H
#include "Commands/Subsystem.h"
#include "WPILib.h"
#include "CANTalon.h"

class Arm: public Subsystem
{
private:
	// It's desirable that everything possible is private except
	// for methods that implement subsystem capabilities
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	std::shared_ptr<CANTalon> adjust;
public:
	Arm();
	float GetArm();
	void SetArm(float x);
	void InitDefaultCommand();
	void SetArmMode(CANTalon::ControlMode mode);
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS
	// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTANTS

};

#endif
