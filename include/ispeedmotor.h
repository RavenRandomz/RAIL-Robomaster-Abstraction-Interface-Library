#ifndef ISPEEDMOTOR_H_SDFLKJSFLKEJFZXCSEF
#define ISPEEDMOTOR_H_SDFLKJSFLKEJFZXCSEF
#include "iwattbudgeter.h"
namespace rail
{
	template <typename SpeedData, typename WattData>
	class ISpeedMotor : public IWattBudgeter<WattData>
	{
	public:
		virtual void setBudget(const WattData& wattage) override = 0;
		virtual const WattData& getBudget() const override = 0;

		virtual void setSpeed(const SpeedData& speed) = 0;
		virtual const SpeedData& getSpeed() const = 0;
		virtual void setMaxSpeed(const SpeedData& maxSpeed) = 0;
		virtual const SpeedData& getMaxSpeed() const = 0;
		virtual void setMinSpeed(const SpeedData& maxSpeed) = 0;
		virtual const SpeedData& getMinSpeed() const = 0;
	};
}
#endif
