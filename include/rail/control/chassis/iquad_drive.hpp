#ifndef RAIL_CHASSIS_I_QUAD_DRIVE_H
#define RAIL_CHASSIS_I_QUAD_DRIVE_H
#include "quad_drive_data.hpp"

namespace rail::chassis
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
