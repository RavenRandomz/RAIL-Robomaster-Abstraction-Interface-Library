#ifndef ITORQUEMOTOR_H_SDFLKJSFLKEJFZXCSEF
#define ITORQUEMOTOR_H_SDFLKJSFLKEJFZXCSEF
namespace rail
{
	template <typename TorqueData>
	class ITorqueMotor
	{
	public:
		virtual void setTorque(const TorqueData& torque) = 0;
		virtual TorqueData getTorque() const = 0;

		virtual ~ITorqueMotor() = default;
	};
}
#endif
