#ifndef RAIL_MOTORS_I_SPEED_MOTOR_H
#define RAIL_MOTORS_I_SPEED_MOTOR_H
#include "ispeed_control.hpp"
#include "rail/system/isystem.hpp"

namespace rail::motor
{
	template <typename SpeedData>
	class ISpeedMotor : virtual public ISpeedControl<SpeedData>, virtual public system::ISystem
	{
	public:
		virtual ~ISpeedMotor() = default;
	};
}
#endif
