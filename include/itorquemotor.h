#ifndef ITORQUEMOTOR_H_SDFLKJSFLKEJFZXCSEF
#define ITORQUEMOTOR_H_SDFLKJSFLKEJFZXCSEF
#include "iwattbudgeter.h"

namespace rail
{
	class ITorqueMotor : IBudgeter
	{
	public:
		virtual void setBudget(double wattage) override = 0;
		virtual double getBudget() const override = 0;
		virtual void setTorque(double speed) = 0;
		virtual double getTorque() const = 0;
	};
}
#endif
