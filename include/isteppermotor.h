#ifndef ISTEPPERMOTOR_H_SDFLKJSFLKEJFZXCSEF
#define ISTEPPERMOTOR_H_SDFLKJSFLKEJFZXCSEF
#include "ibudgeter.h"

namespace rail
{
	class IStepperMotor : IBudgeter
	{
	public:
		virtual void setBudget(double wattage) override = 0;
		virtual double getBudget() const override = 0;
		virtual void setPosition(double speed) = 0;
		virtual double getPosition() const = 0;
	};
}
#endif
