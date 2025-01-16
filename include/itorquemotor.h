#ifndef ITORQUEMOTOR_H_SDFLKJSFLKEJFZXCSEF
#define ITORQUEMOTOR_H_SDFLKJSFLKEJFZXCSEF
namespace rail
{
	class ITorqueMotor
	{
	public:
		virtual void setTorque(double speed) = 0;
		virtual double getTorque() const = 0;
	};
}
#endif
