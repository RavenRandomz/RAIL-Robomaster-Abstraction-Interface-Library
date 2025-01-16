#ifndef ISPEEDMOTOR_H_SDFLKJSFLKEJFZXCSEF
#define ISPEEDMOTOR_H_SDFLKJSFLKEJFZXCSEF
#include "ibudgeter.h"
namespace rail
{
	class ISpeedMotor : IBudgeter
	{
	public:
		virtual void setBudget(double wattage) override = 0;
		virtual double getBudget() const override = 0;
		virtual void setSpeed(double speed) = 0;
		virtual double getSpeed() const = 0;
	};
}
#endif
