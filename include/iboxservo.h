#ifndef I_BOX_SERVO_ASFIJSSLEFIJSEIFJ9WEFW3OIRJ
#define I_BOX_SERVO_ASFIJSSLEFIJSEIFJ9WEFW3OIRJ
#include "ipositionmotor.h"
#include "iwattbudgeter.h"
namespace rail
{
	template <typename PositionData, typename WattData>
	class IBoxServo : virtual public IPositionMotor<PositionData>, virtual public IWattBudgeter<WattData>
	{
	public:
		virtual void setWattBudget(const WattData& wattage) override = 0;
		virtual WattData getWattBudget() const override = 0;

		virtual void setPosition(const PositionData& position) override = 0;
		virtual PositionData getPosition() const override = 0;

		virtual void setMaxPosition(const PositionData& Maxposition) override = 0;
		virtual PositionData getMaxPosition() const override = 0;

		virtual void setMinPosition(const PositionData& Minposition) override = 0;
		virtual PositionData getMinPosition() const override = 0;


		virtual void setWattEstimateMode(bool mode) override = 0;
		virtual bool getWattOverbudgetStatus() const override = 0;
		virtual void resetWattOverbudgetStatus() override = 0;
		virtual WattData getWattOverbudgetAmount() const override= 0;

		virtual ~IBoxServo();
	};
}

#endif
