#ifndef RAIL_MOTORS_I_POSITION_MOTOR_H
#define RAIL_MOTORS_I_POSITION_MOTOR_H
namespace rail::motors
{
	template <typename PositionData>
	class IPositionMotor 
	{
	public:
		virtual void setTargetPosition(const PositionData& speed) = 0;
		virtual PositionData getTargetPosition() const = 0;

		virtual ~IPositionMotor() = default;
	};
}
#endif
