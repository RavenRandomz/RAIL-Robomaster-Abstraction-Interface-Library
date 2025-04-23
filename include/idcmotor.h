#ifndef IGENERALDCMOTOR_H_ASDLFJEFJLKXCV
#define IGENERALDCMOTOR_H_ASDLFJEFJLKXCV
#include "itorquemotor.h"
#include "ispeedmotor.h"
#include "iwattbudgeter.h"

namespace rail
{
	template <typename SpeedData, typename TorqueData, typename WattData>
	class IDCMotor : public ITorqueMotor<TorqueData, WattData>, public ISpeedMotor<SpeedData, WattData>
	{

		virtual void setWattBudget(const WattData& wattage) override = 0;
		virtual const WattData& getWattBudget() const override = 0;

		virtual void setSpeed(const SpeedData& speed) override = 0;
		virtual const SpeedData& getSpeed() const override = 0;

		virtual void setMaxSpeed(const SpeedData& maxSpeed) override = 0;
		virtual const SpeedData& getMaxSpeed() const override = 0;
		virtual void setMinSpeed(const SpeedData& maxSpeed) override = 0;
		virtual const SpeedData& getMinSpeed() const override = 0;

		virtual void setTorque(const TorqueData& speed) override = 0;
		virtual const TorqueData& getTorque() const override = 0;

		virtual void setMaxTorque(const TorqueData& maxSpeed) override = 0;
		virtual const TorqueData& getMaxTorque() const override = 0;
		virtual void setMinTorque(const TorqueData& maxSpeed) override = 0;
		virtual const TorqueData& getMinTorque() const override = 0;

	};
}
#endif
