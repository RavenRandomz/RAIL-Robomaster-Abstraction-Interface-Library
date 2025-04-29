#ifndef ISPEEDWHEEL_H_SDFKLSEJFLSDJF
#define ISPEEDWHEEL_H_SDFKLSEJFLSDJF
#include "ispeedmotor.h"

namespace rail
{
	template <typename RadiusData, typename SpeedData, typename AngularSpeedData>
	class ISpeedWheel : virtual public ISpeedMotor<AngularSpeedData>
	{
	public:
		virtual void setRimSpeed(const SpeedData& rimSpeed) = 0;
		virtual SpeedData getRimSpeed() const = 0;

		virtual void setMaxRimSpeed(const SpeedData& maxRimSpeed) = 0;
		virtual SpeedData getMaxRimSpeed() const = 0;

		virtual void setMinRimSpeed(const SpeedData& minRimSpeed) = 0;
		virtual SpeedData getMinRimSpeed() const = 0;

		virtual void setRadius(const RadiusData& radius) = 0;
		virtual RadiusData getRadius() const = 0;

		//Inherited functions
		virtual void setSpeed(const SpeedData& speed) override = 0;
		virtual SpeedData getSpeed() const override = 0;

		virtual void setMaxSpeed(const SpeedData& maxSpeed) override = 0;
		virtual SpeedData getMaxSpeed() const override = 0;

		virtual void setMinSpeed(const SpeedData& minSpeed) override = 0;
		virtual SpeedData getMinSpeed() const override = 0;

		virtual ~ISpeedWheel();
	};
}
#endif
