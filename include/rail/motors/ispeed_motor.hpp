#ifndef RAIL_MOTORS_I_SPEED_MOTOR_H
#define RAIL_MOTORS_I_SPEED_MOTOR_H
#include "ispeed_control.hpp"

namespace rail::motors
{
	template <typename SpeedData>
	class ISpeedMotor : public ISpeedControl<SpeedData>
	{
	public:
		virtual ~ISpeedMotor() = default;
	};
}
#endif
