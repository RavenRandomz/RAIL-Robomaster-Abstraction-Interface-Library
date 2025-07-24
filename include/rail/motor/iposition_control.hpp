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

		virtual ~IPositionControl() {};
	};
}
#endif
