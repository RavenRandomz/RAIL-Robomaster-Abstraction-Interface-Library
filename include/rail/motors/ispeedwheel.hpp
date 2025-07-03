#ifndef ISPEEDWHEEL_H_SDFKLSEJFLSDJF
#define ISPEEDWHEEL_H_SDFKLSEJFLSDJF
#include "ispeedmotor.hpp"

namespace rail
{
	template <typename SpeedData, typename AngularSpeedData>
	class ISpeedWheel : virtual public ISpeedMotor<AngularSpeedData>
	{
	public:
		virtual void setRimSpeed(const SpeedData& rimSpeed) = 0;
		virtual SpeedData getRimSpeed() const = 0;

		virtual ~ISpeedWheel() = default;
	};
}
#endif
