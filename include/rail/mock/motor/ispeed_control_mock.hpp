#ifndef RAIL_MOCK_MOTOR_I_SPEED_CONTROL_MOCK_HPP
#define RAIL_MOCK_MOTOR_I_SPEED_CONTROL_MOCK_HPP
#include "rail/motor/ispeed_control.hpp"
#include <gmock/gmock.h>

namespace rail::motor
{
	template <typename SpeedData>
	class ISpeedControlMock : virtual public ISpeedControl<SpeedData>
	{
	public:
		MOCK_METHOD(void, setTargetSpeed, (const SpeedData& speed), (override));
		MOCK_METHOD(SpeedData, getTargetSpeed, (), (const, override));
	};
}
#endif
