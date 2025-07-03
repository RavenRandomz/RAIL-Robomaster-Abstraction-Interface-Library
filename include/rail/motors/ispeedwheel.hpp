#ifndef RAIL_MOTORS_I_SPEED_WHEEL_H
#define RAIL_MOTORS_I_SPEED_WHEEL_H
#include "ispeedmotor.hpp"

namespace rail::motors
{
	template <typename SpeedData, typename AngularSpeedData>
	class ISpeedWheel : virtual public ISpeedMotor<AngularSpeedData>
	{
	public:
		virtual void setRimSpeed(const SpeedData& rimSpeed) = 0;
		virtual SpeedData getRimSpeed() const = 0;

		virtual ~ISpeedWheel() = default;
	};
}
#endif
