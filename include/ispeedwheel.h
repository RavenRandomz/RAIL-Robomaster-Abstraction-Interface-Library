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
		virtual SpeedData getRimSpeed() = 0;

		virtual void setRadius(const RadiusData& radius) = 0;
		virtual RadiusData& getRadius() = 0;

	};
}
#endif
