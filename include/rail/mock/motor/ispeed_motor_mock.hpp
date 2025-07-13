#ifndef RAIL_MOCK_MOTOR_I_SPEED_MOTOR_MOCK_HPP
#define RAIL_MOCK_MOTOR_I_SPEED_MOTOR_MOCK_HPP
#include "rail/motor/ispeed_motor.hpp"
#include "rail/mock/motor/ispeed_control_mock.hpp"
#include "rail/mock/system/isystem_mock.hpp"

namespace rail::motor
{
	template <typename SpeedData>
	class ISpeedMotorMock:
		virtual public ISpeedMotor<SpeedData>,
		virtual public ISpeedControlMock<SpeedData>,
		virtual public system::ISystemMock
	{
	public:
		virtual ~ISpeedMotorMock() {};
	};
}
#endif
