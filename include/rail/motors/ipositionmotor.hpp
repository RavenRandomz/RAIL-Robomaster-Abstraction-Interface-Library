#ifndef IPOSITIONMOTOR_H_SDFLKJSFLKEJFZXCSEF
#define IPOSITIONMOTOR_H_SDFLKJSFLKEJFZXCSEF
namespace rail::motors
{
	template <typename PositionData>
	class IPositionMotor 
	{
	public:
		virtual void setTargetPosition(const PositionData& speed) = 0;
		virtual PositionData getTargetPosition() const = 0;

		virtual ~IPositionMotor() = default;
	};
}
#endif
