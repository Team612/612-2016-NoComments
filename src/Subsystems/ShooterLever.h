#ifndef ShooterLever_H
#define ShooterLever_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class ShooterLever: public Subsystem
{
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
public:
	ShooterLever();
	void InitDefaultCommand();
	std::shared_ptr<Servo> LeverServo1;
};

#endif
