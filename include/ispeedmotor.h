#ifndef ISPEEDMOTOR_H_SDFLKJSFLKEJFZXCSEF
#define ISPEEDMOTOR_H_SDFLKJSFLKEJFZXCSEF
#include "iwattbudgeter.h"
namespace rail
{
	template <typename SpeedData, typename WattData>
	class ISpeedMotor : public IWattBudgeter<WattData>
	{
	public:
		virtual void setBudget(WattData wattage) override = 0;
		virtual WattData getBudget() const override = 0;

		virtual void setSpeed(SpeedData speed) = 0;
		virtual SpeedData getSpeed() const = 0;
		virtual void setMaxSpeed(SpeedData maxSpeed) = 0;
		virtual SpeedData getMaxSpeed() const = 0;
		virtual void setMinSpeed(SpeedData maxSpeed) = 0;
		virtual SpeedData getMinSpeed() const = 0;
	};
}
#endif
