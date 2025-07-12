#ifndef RAIL_MOTORS_I_POSITION_CONTROL_H
#define RAIL_MOTORS_I_POSITION_CONTROL_H
namespace rail::motor
{
	/**
	 * This allows a program to client to control the position without having
	 * responsibility on updating the motor itself
	 */
	template <typename PositionData>
	class IPositionControl
	{
	public:
		virtual void setTargetPosition(const PositionData& position) = 0;
		virtual PositionData getTargetPosition() const = 0;
		
		//There is no virtual destructor because this is only meant to access the instance
		//If this had a virtual destructor, a non-owning command class could result in a memory error
		//when the instance was deleted when the owning subsystem still controls it.
	};
}
#endif
