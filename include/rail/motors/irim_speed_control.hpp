#ifndef RAIL_MOTORS_I_RIM_SPEED_CONTROL_HPP
#define RAIL_MOTORS_I_RIM_SPEED_CONTROL_HPP

namespace rail::motors
{
	/**
	 * This allows the client to control a motor which is attached to a wheel.
	 * They are able to specify the linear speed of the outermost rim.
	 */
	template <typename SpeedData>
	class IRimSpeedControl
	{
	public:
		virtual void setRimSpeed(const SpeedData& rimSpeed) = 0;
		virtual SpeedData getRimSpeed() const = 0;

		virtual ~IRimSpeedControl() = default;
	};
}
#endif
