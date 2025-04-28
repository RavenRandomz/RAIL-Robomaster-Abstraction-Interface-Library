#ifndef ITORQUEMOTOR_H_SDFLKJSFLKEJFZXCSEF
#define ITORQUEMOTOR_H_SDFLKJSFLKEJFZXCSEF
#include "iwattbudgeter.h"

namespace rail
{
	template <typename TorqueData, typename WattData>
	class ITorqueMotor : virtual public IWattBudgeter<WattData>
	{
	public:
		virtual void setWattBudget(const WattData& wattage) override = 0;
		virtual WattData getWattBudget() const override = 0;

		virtual void setTorque(const TorqueData& torque) = 0;
		virtual TorqueData getTorque() const = 0;

		virtual void setMaxTorque(const TorqueData& maxTorque) = 0;
		virtual TorqueData getMaxTorque() const = 0;
		virtual void setMinTorque(const TorqueData& minTorque) = 0;
		virtual TorqueData getMinTorque() const = 0;
	};
}
#endif
