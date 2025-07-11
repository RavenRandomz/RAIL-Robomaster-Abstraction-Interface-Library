#ifndef RAIL_CONTROL_CHASSIS_I_QUAD_DRIVE_HPP
#define RAIL_CONTROL_CHASSIS_I_QUAD_DRIVE_HPP
#include "iquad_control.hpp"

namespace rail::chassis
{
    template<class SpeedData>
    /**
     * Provides a uniform means of controlling 4 motors in a quad orientation.
     * This is particularly useful for the 3 main holonomic drives: omni, mecnaum, and swerve
     */
    class IQuadDrive : virtual public IQuadControl<SpeedData>
    {
        using WheelSpeeds = IQuadControl<SpeedData>::WheelSpeeds;
        virtual ~IQuadDrive() = 0;
    };
}
#endif
