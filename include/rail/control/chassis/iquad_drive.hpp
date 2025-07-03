#ifndef RAIL_CONTROL_CHASSIS_I_QUAD_DRIVE_HPP
#define RAIL_CONTROL_CHASSIS_I_QUAD_DRIVE_HPP
#include "quad_drive_data.hpp"

namespace rail::control::chassis
{
    template<class SpeedData>
    class IQuadDrive
    {
        using WheelSpeeds = QuadDriveData<SpeedData>;

        virtual void setTargetWheelSpeeds(const WheelSpeeds& wheelSpeeds) = 0;
        virtual WheelSpeeds getTargetWheelSpeeds() const = 0;
    };
}
#endif
