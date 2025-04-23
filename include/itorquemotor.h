#ifndef ITORQUEMOTOR_H_SDFLKJSFLKEJFZXCSEF
#define ITORQUEMOTOR_H_SDFLKJSFLKEJFZXCSEF
#include "iwattbudgeter.h"

namespace rail
{
	template <typename TorqueData, typename WattData>
	class ITorqueMotor : IWattBudgeter<WattData>
	{
	public:
		virtual void setBudget(WattData wattage) override = 0;
		virtual WattData getBudget() const override = 0;

		virtual void setTorque(TorqueData speed) = 0;
		virtual TorqueData getTorque() const = 0;
		virtual void setMaxTorque(TorqueData maxSpeed) = 0;
		virtual TorqueData getMaxTorque() const = 0;
		virtual void setMinTorque(TorqueData maxSpeed) = 0;
		virtual TorqueData getMinTorque() const = 0;
	};
}
#endif
