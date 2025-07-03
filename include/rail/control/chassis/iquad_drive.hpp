#ifndef RAIL_CONTROL_CHASSIS_I_QUAD_DRIVE_HPP
#define RAIL_CONTROL_CHASSIS_I_QUAD_DRIVE_HPP
#include "quad_drive_data.hpp"

namespace rail::control::chassis
{
    template<class SpeedData>
    /**
     * Provides a uniform means of controlling 4 motors in a quad orientation.
     * This is particularly useful for the 3 main holonomic drives: omni, mecnaum, and swerve
     */
    class IQuadDrive
    {
        using WheelSpeeds = QuadDriveData<SpeedData>;

        virtual void setTargetWheelSpeeds(const WheelSpeeds& wheelSpeeds) = 0;
        virtual WheelSpeeds getTargetWheelSpeeds() const = 0;
    };
}
#endif
