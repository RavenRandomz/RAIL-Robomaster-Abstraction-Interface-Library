#ifndef RAIL_MOTORS_I_SPEED_MOTOR_H
#define RAIL_MOTORS_I_SPEED_MOTOR_H
namespace rail::motors
{
	template <typename SpeedData>
	class ISpeedMotor
	{
	public:
		virtual void setTargetSpeed(const SpeedData& speed) = 0;
		virtual SpeedData getTargetSpeed() const = 0;

		virtual ~ISpeedMotor() = default;
	};
}
#endif
