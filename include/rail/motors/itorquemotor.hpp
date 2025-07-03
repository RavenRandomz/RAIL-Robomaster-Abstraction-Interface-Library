#ifndef ITORQUEMOTOR_H_SDFLKJSFLKEJFZXCSEF
#define ITORQUEMOTOR_H_SDFLKJSFLKEJFZXCSEF
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
