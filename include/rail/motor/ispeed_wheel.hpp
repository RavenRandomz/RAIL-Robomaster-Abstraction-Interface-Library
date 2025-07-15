#ifndef RAIL_MOTORS_I_SPEED_WHEEL_H
#define RAIL_MOTORS_I_SPEED_WHEEL_H
#include "ispeed_wheel_control.hpp"
#include "ispeed_control.hpp"
#include "rail/system/isystem.hpp"

namespace rail::motor
{
	/**
	 * This is useful for precise control of chassis wheels and ammo booster flywheels.
	 */
	template <typename Velocity>
	class ISpeedWheel:
		virtual public ISpeedWheelControl<Velocity>,
		virtual public system::ISystem
	{
	public:
		virtual ~ISpeedWheel() {};
	};
}
#endif
