#ifndef ITORQUEMOTOR_H_SDFLKJSFLKEJFZXCSEF
#define ITORQUEMOTOR_H_SDFLKJSFLKEJFZXCSEF
#include "iwattbudgeter.h"

namespace rail
{
	class ITorqueMotor : IWattBudgeter
	{
	public:
		virtual void setBudget(double wattage) override = 0;
		virtual double getBudget() const override = 0;

		virtual void setTorque(double speed) = 0;
		virtual double getTorque() const = 0;
		virtual void setMaxTorque(double maxSpeed) = 0;
		virtual double getMaxTorque() const = 0;
		virtual void setMinTorque(double maxSpeed) = 0;
		virtual double getMinTorque() const = 0;
	};
}
#endif
