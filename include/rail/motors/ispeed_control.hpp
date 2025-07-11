#ifndef RAIL_MOTORS_I_SPEED_CONTROL_HPP
#define RAIL_MOTORS_I_SPEED_CONTROL_HPP
namespace rail::motors
{
	template <typename SpeedData>
	class ISpeedControl
	{
	public:
		virtual void setTargetSpeed(const SpeedData& speed) = 0;
		virtual SpeedData getTargetSpeed() const = 0;

		//There is no virtual destructor because this is only meant to access the instance
		//If this had a virtual destructor, a non-owning command class could result in a memory error
		//when the instance was deleted when the owning subsystem still controls it.
	};
}
#endif
