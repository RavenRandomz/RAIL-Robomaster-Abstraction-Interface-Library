#ifndef ISPEEDMOTOR_H_SDFLKJSFLKEJFZXCSEF
#define ISPEEDMOTOR_H_SDFLKJSFLKEJFZXCSEF
namespace rail
{
	class ISpeedMotor
	{
	public:
		virtual void setSpeed(double speed) = 0;
		virtual double getSpeed() const = 0;
	};
}
#endif
