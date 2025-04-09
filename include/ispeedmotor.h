#ifndef ISPEEDMOTOR_H_SDFLKJSFLKEJFZXCSEF
#define ISPEEDMOTOR_H_SDFLKJSFLKEJFZXCSEF
#include "iwattbudgeter.h"
namespace rail
{
	class ISpeedMotor : IWattBudgeter
	{
	public:
		virtual void setBudget(double wattage) override = 0;
		virtual double getBudget() const override = 0;
		virtual void setSpeed(double speed) = 0;
		virtual double getSpeed() const = 0;
	};
}
#endif
