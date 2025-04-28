#ifndef ISPEEDMOTOR_H_SDFLKJSFLKEJFZXCSEF
#define ISPEEDMOTOR_H_SDFLKJSFLKEJFZXCSEF
#include "iwattbudgeter.h"
namespace rail
{
	template <typename SpeedData, typename WattData>
	class ISpeedMotor : virtual public IWattBudgeter<WattData>
	{
	public:
		virtual void setWattBudget(const WattData& wattage) override = 0;
		virtual WattData getWattBudget() const override = 0;

		virtual void setSpeed(const SpeedData& speed) = 0;
		virtual SpeedData getSpeed() const = 0;

		virtual void setMaxSpeed(const SpeedData& maxSpeed) = 0;
		virtual SpeedData getMaxSpeed() const = 0;

		virtual void setMinSpeed(const SpeedData& minSpeed) = 0;
		virtual SpeedData getMinSpeed() const = 0;
	};
}
#endif
