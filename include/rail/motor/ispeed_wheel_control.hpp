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
		virtual void setRimSpeed(const SpeedData& rimSpeed) = 0;
		virtual SpeedData getRimSpeed() const = 0;

		//There is no virtual destructor because this is only meant to access the instance
		//If this had a virtual destructor, a non-owning command class could result in a memory error
		//when the instance was deleted when the owning subsystem still controls it.
	};
}
#endif
