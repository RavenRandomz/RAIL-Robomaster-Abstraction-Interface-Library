#ifndef RAIL_MOTOR_I_OUTPUT_MOTOR_HPP
#define RAIL_MOTOR_I_OUTPUT_MOTOR_HPP
#include "ioutput_control.hpp"
#include "rail/system/isystem.hpp"
namespace rail::motor
{
	/**
	 * For non-owning users who are not expected to call update() reguarily, please
	 * use motor::IOutputControl.
	 */
	template <typename OutputData>
	class IOutputMotor
		:
		virtual public IOutputControl<OutputData>,
		virtual public system::ISystem
	{
	public:
		virtual ~IOutputMotor() {};
	};
}
#endif
