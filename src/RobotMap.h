#ifndef ROBOTMAP_H
#define ROBOTMAP_H
#include <WPILib.h>
#include <AbsoluteEncoder/AbsoluteEncoder.h>

/**
 * The RobotMap is a mapping from the ports sensors and actuators are wired into
 * to a variable name. This provides flexibility changing wiring, makes checking
 * the wiring easier and significantly reduces the number of magic numbers
 * floating around.
 */
class RobotMap
{
public:
	static std::shared_ptr<Talon> 		driveTalonFL;
	static std::shared_ptr<Talon> 		driveTalonRL;
	static std::shared_ptr<Talon> 		driveTalonFR;
	static std::shared_ptr<Talon> 		driveTalonRR;
	static std::shared_ptr<Servo> 		shifterL;
	static std::shared_ptr<Servo> 		shifterR;
	static std::shared_ptr<Encoder> 	driveEncoderL;
	static std::shared_ptr<Encoder> 	driveEncoderR;
	static std::shared_ptr<RobotDrive> 	drivetrainRobotDrive;
	
	static std::shared_ptr<Servo> 			shooterActuator;
	static std::shared_ptr<AbsoluteEncoder> shooterAbsEncoder;
	static std::shared_ptr<CANTalon> 		shooterRotateMotor;
	static std::shared_ptr<AnalogInput> 	shooterIR;
	
	static std::shared_ptr<CANTalon> flywheelMotorL;
	static std::shared_ptr<CANTalon> flywheelMotorR;
	static constexpr float flywheelHallL = 6;
	static constexpr float flywheelHallR = 7;
	
	static std::shared_ptr<USBCamera> cam1;
	
	static std::map<std::string, int> ports;
	
	// TODO: These are only used in the Hall Effect control method
	static constexpr float flywheelShootSpeed = 40.0f;
	static constexpr float flywheelIntakeSpeed = -20.0f;

	static void init();
};
#endif
