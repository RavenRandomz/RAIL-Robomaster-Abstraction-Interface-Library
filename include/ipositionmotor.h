#ifndef IPOSITIONMOTOR_H_SDFLKJSFLKEJFZXCSEF
#define IPOSITIONMOTOR_H_SDFLKJSFLKEJFZXCSEF
namespace rail
{
	template <typename PositionData>
	class IPositionMotor 
	{
	public:
		virtual void setPosition(const PositionData& speed) = 0;
		virtual PositionData getPosition() const = 0;

		virtual void setMaxPosition(const PositionData& maxPosition) = 0;
		virtual PositionData getMaxPosition() const = 0;

		virtual void setMinPosition(const PositionData& minPosition) = 0;
		virtual PositionData getMinPosition() const = 0;
	};
}
#endif
