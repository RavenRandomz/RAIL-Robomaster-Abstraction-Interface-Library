#ifndef IGENERALDCMOTOR_H_ASDLFJEFJLKXCV
#define IGENERALDCMOTOR_H_ASDLFJEFJLKXCV
#include "itorquemotor.h"
#include "ispeedmotor.h"
#include "iwattbudgeter.h"

namespace rail
{
	class IDCMotor : ITorqueMotor, ISpeedMotor 
	{

		virtual void setBudget(double wattage) override = 0;
		virtual double getBudget() const override = 0;

		virtual void setSpeed(double speed) override = 0;
		virtual double getSpeed() const override = 0;
		virtual void setMaxSpeed(double maxSpeed) override = 0;
		virtual double getMaxSpeed() const override = 0;
		virtual void setMinSpeed(double maxSpeed) override = 0;
		virtual double getMinSpeed() const override = 0;

		virtual void setTorque(double speed) override = 0;
		virtual double getTorque() const override = 0;
		virtual void setMaxTorque(double maxSpeed) override = 0;
		virtual double getMaxTorque() const override = 0;
		virtual void setMinTorque(double maxSpeed) override = 0;
		virtual double getMinTorque() const override = 0;

	};
}
#endif
