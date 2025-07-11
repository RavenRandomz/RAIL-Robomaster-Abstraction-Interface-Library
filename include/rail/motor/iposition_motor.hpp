#ifndef RAIL_MOTORS_I_POSITION_MOTOR_H
#define RAIL_MOTORS_I_POSITION_MOTOR_H
#include "iposition_control.hpp"
#include "rail/system/isystem.hpp"
namespace rail::motor
{
	/**
	 * Interface for a general motor that can be controlled via a target position.
	 * This is for dependency injection in using a position motor instance i.e. the
	 * client will be responsible for calling update() and initialize().
	 * 
	 * For non-owning users who are not expected to call update() reguarily, please
	 * use motors::IPositionControl.
	 */
	template <typename PositionData>
	class IPositionMotor : virtual public IPositionControl<PositionData>, virtual public system::ISystem
	{
	public:
		virtual ~IPositionMotor() = default;
	};
}
#endif
