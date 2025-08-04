#ifndef RAIL_MOTORS_I_SPEED_WHEEL_CONTROL_HPP
#define RAIL_MOTORS_I_SPEED_WHEEL_CONTROL_HPP

namespace rail::motor
{
	/**
	 * This allows the client to control a motor which is attached to a wheel.
	 * They are able to specify the linear speed of the outermost rim.
	 */
	template <typename SpeedData>
	class ISpeedWheelControl
	{
	public:
		virtual void setTargetRimSpeed(const SpeedData& rimSpeed) = 0;

		virtual ~ISpeedWheelControl() {};
	};
}
#endif
