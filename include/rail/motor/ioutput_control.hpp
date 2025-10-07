#ifndef RAIL_MOTOR_I_OUTPUT_CONTROL_HPP
#define RAIL_MOTOR_I_OUTPUT_CONTROL_HPP
namespace rail::motor
{	
    /**
     * When controlling a motor whose output (abstract value corresponding either to
     * current or voltage) can be controlled.
     * 
     * Useful for interfacing with generic PID programs.
	 */
	template <typename OutputData>
	class IOutputControl 
	{
	public:
		virtual void setTargetOutput(const OutputData& output) = 0;

		virtual ~IOutputControl() {};
	};

}
#endif