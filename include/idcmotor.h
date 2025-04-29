#ifndef IGENERALDCMOTOR_H_ASDLFJEFJLKXCV
#define IGENERALDCMOTOR_H_ASDLFJEFJLKXCV
#include "itorquemotor.h"
#include "ispeedmotor.h"
#include "iwattbudgeter.h"
#include "ireversiblemotor.h"

namespace rail
{
	template <typename SpeedData, typename TorqueData, typename WattData>
	class IDCMotor : virtual public ITorqueMotor<TorqueData>,
					 virtual public ISpeedMotor<SpeedData>,
					 virtual public IWattBudgeter<WattData>,
					 virtual public IReversibleMotor
	{
		public:
		virtual void setSpeed(const SpeedData& speed) override = 0;
		virtual SpeedData getSpeed() const override = 0;

		virtual void setMaxSpeed(const SpeedData& maxSpeed) override = 0;
		virtual SpeedData getMaxSpeed() const override = 0;
		virtual void setMinSpeed(const SpeedData& minSpeed) override = 0;
		virtual SpeedData getMinSpeed() const override = 0;

		virtual void setTorque(const TorqueData& torque) override = 0;
		virtual TorqueData getTorque() const override = 0;

		virtual void setMaxTorque(const TorqueData& maxTorque) override = 0;
		virtual TorqueData getMaxTorque() const override = 0;
		virtual void setMinTorque(const TorqueData& minTorque) override = 0;
		virtual TorqueData getMinTorque() const override = 0;

		virtual void setReversed(bool reverse) override = 0;
		virtual bool getReversed() const override = 0;


		virtual void setWattBudget(const WattData& wattage) override = 0;
		virtual WattData getWattBudget() const override = 0;

		virtual void setWattEstimateMode(bool mode) override = 0;
		virtual bool getWattOverbudgetStatus() const override = 0;
		virtual void resetWattOverbudgetStatus() override = 0;
		virtual WattData getWattOverbudgetAmount() const override= 0;

		virtual ~IDCMotor();
	};
}
#endif
