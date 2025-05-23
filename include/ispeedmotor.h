#ifndef ISPEEDMOTOR_H_SDFLKJSFLKEJFZXCSEF
#define ISPEEDMOTOR_H_SDFLKJSFLKEJFZXCSEF
namespace rail
{
	template <typename SpeedData>
	class ISpeedMotor
	{
	public:
		virtual void setSpeed(const SpeedData& speed) = 0;
		virtual SpeedData getSpeed() const = 0;

		virtual void setMaxSpeed(const SpeedData& maxSpeed) = 0;
		virtual SpeedData getMaxSpeed() const = 0;

		virtual void setMinSpeed(const SpeedData& minSpeed) = 0;
		virtual SpeedData getMinSpeed() const = 0;

		virtual ~ISpeedMotor() = default;
	};
}
#endif
