#ifndef RAIL_MOTORS_I_TORQUE_MOTOR_H
#define RAIL_MOTORS_I_TORQUE_MOTOR_H
namespace rail::motors
{
	template <typename TorqueData>
	class ITorqueMotor
	{
	public:
		virtual void setTargetTorque(const TorqueData& torque) = 0;
		virtual TorqueData getTargetTorque() const = 0;

		virtual ~ITorqueMotor() = default;
	};
}
#endif
