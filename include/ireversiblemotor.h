#ifndef I_REVERSIBLE_MOTOR_H_SDKLFJSLEFJASDF
#define I_REVERSIBLE_MOTOR_H_SDKLFJSLEFJASDF
namespace rail
{
	/// @brief This motor can be reversed.
	/// If reversed is true, then the motor is rotating
	/// counterclockwise looking at the shaft.
	class IReversibleMotor 
	{
	public:
		virtual void setReversed(bool reverse) = 0;
		virtual bool getReversed() const = 0;

		virtual ~IReversibleMotor();
	};
}
#endif
