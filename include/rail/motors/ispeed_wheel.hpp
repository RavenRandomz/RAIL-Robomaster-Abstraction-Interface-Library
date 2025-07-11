#ifndef RAIL_MOTORS_I_SPEED_WHEEL_H
#define RAIL_MOTORS_I_SPEED_WHEEL_H
#include "irim_speed_control.hpp"
#include "ispeed_control.hpp"

namespace rail::motors
{
	/**
	 * This is useful for precise control of chassis wheels and ammo booster flywheels.
	 */
	template <typename SpeedData, typename AngularSpeedData>
	class ISpeedWheel : virtual public IRimSpeedControl<SpeedData>, virtual public ISpeedControl<AngularSpeedData>
	{
	public:
		virtual ~ISpeedWheel() = default;
	};
}
#endif
