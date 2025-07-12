#ifndef RAIL_CONTROL_CHASSIS_I_QUAD_DRIVE_HPP
#define RAIL_CONTROL_CHASSIS_I_QUAD_DRIVE_HPP
#include "iquad_control.hpp"
#include "rail/system/isystem.hpp"

namespace rail::chassis
{
    template<class WheelSpeeds>
    /**
     * Provides a uniform means of controlling 4 motors in a quad orientation.
     * This is particularly useful for the 3 main holonomic drives: omni, mecnaum, and swerve
     * 
     * This is recommended for use with QuadDriveData
     */
    class IQuadDrive:
        virtual public IQuadControl<WheelSpeeds>,
        virtual public system::ISystem
    {
    public:
        virtual ~IQuadDrive() {};
    };
}
#endif
