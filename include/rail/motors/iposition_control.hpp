#ifndef RAIL_MOTORS_I_POSITION_CONTROL_H
#define RAIL_MOTORS_I_POSITION_CONTROL_H
namespace rail::motors
{
	/**
	 * This allows a program to client to control the position without having
	 * responsibility on updating the motor itself
	 */
	template <typename PositionData>
	class IPositionControl
	{
	public:
		virtual void setTargetPosition(const PositionData& speed) = 0;
		virtual PositionData getTargetPosition() const = 0;

		virtual ~IPositionControl() = default;
	};
}
#endif
