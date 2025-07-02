#ifndef ISPEEDMOTOR_H_SDFLKJSFLKEJFZXCSEF
#define ISPEEDMOTOR_H_SDFLKJSFLKEJFZXCSEF
namespace rail
{
	template <typename SpeedData>
	class ISpeedMotor
	{
	public:
		virtual void setTargetSpeed(const SpeedData& speed) = 0;
		virtual SpeedData getTargetSpeed() const = 0;

		virtual ~ISpeedMotor() = default;
	};
}
#endif
