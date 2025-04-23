#ifndef IPOSITIONMOTOR_H_SDFLKJSFLKEJFZXCSEF
#define IPOSITIONMOTOR_H_SDFLKJSFLKEJFZXCSEF
#include "iwattbudgeter.h"

namespace rail
{
	template <typename PositionData, typename WattData>
	class IPositionMotor : public IWattBudgeter<WattData>
	{
	public:
		virtual void setWattBudget(const WattData& wattage) override = 0;
		virtual const WattData& getWattBudget() const override = 0;

		virtual void setPosition(const PositionData& speed) = 0;
		virtual const PositionData& getPosition() const = 0;

		virtual void setMaxPosition(const PositionData& position) = 0;
		virtual const PositionData& getMaxPosition() const = 0;

		virtual void setMinPosition(const PositionData& position) = 0;
		virtual const PositionData& getMinPosition() const = 0;
	};
}
#endif
