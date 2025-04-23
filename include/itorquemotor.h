#ifndef ITORQUEMOTOR_H_SDFLKJSFLKEJFZXCSEF
#define ITORQUEMOTOR_H_SDFLKJSFLKEJFZXCSEF
#include "iwattbudgeter.h"

namespace rail
{
	template <typename TorqueData, typename WattData>
	class ITorqueMotor : IWattBudgeter<WattData>
	{
	public:
		virtual void setWattBudget(const WattData& wattage) override = 0;
		virtual const WattData& getWattBudget() const override = 0;

		virtual void setTorque(const TorqueData& speed) = 0;
		virtual const TorqueData& getTorque() const = 0;
		virtual void setMaxTorque(const TorqueData& maxSpeed) = 0;
		virtual TorqueData& getMaxTorque() const = 0;
		virtual void setMinTorque(const TorqueData& maxSpeed) = 0;
		virtual const TorqueData& getMinTorque() const = 0;
	};
}
#endif
