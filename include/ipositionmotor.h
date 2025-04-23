#ifndef IPOSITIONMOTOR_H_SDFLKJSFLKEJFZXCSEF
#define IPOSITIONMOTOR_H_SDFLKJSFLKEJFZXCSEF
#include "iwattbudgeter.h"

namespace rail
{
	template <typename PositionData, typename WattData>
	class IPositionMotor : public IWattBudgeter<WattData>
	{
	public:
		virtual void setBudget(double wattage) override = 0;
		virtual double getBudget() const override = 0;

		virtual void setPosition(double speed) = 0;
		virtual double getPosition() const = 0;

		virtual void setMaxPosition(PositionData position) = 0;
		virtual PositionData getMaxPosition() const = 0;

		virtual void setMinPosition(PositionData position) = 0;
		virtual PositionData getMinPosition() const = 0;
	};
}
#endif
