#ifndef RAIL_MOTORS_I_SPEED_CONTROL_HPP
#define RAIL_MOTORS_I_SPEED_CONTROL_HPP
namespace rail::motor
{
	template <typename SpeedData>
	class ISpeedControl
	{
	public:
		virtual void setTargetSpeed(const SpeedData& speed) = 0;

		virtual ~ISpeedControl() {};
	};
}
#endif
