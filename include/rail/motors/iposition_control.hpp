#ifndef RAIL_MOTORS_I_POSITION_CONTROL_H
#define RAIL_MOTORS_I_POSITION_CONTROL_H
namespace rail::motors
{
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
