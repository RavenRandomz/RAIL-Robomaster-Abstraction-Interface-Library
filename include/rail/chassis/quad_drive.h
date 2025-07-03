#ifndef RAIL_CHASSIS_QUAD_DRIVE_H
#define RAIL_CHASSIS_QUAD_DRIVE_H
#include "quad_drive_data.h"

namespace rail::chassis
{
    template<class SpeedData>
    class QuadDrive
    {
        using WheelSpeeds = QuadDriveData<SpeedData>;

        virtual void setWheelSpeeds(const WheelSpeeds& wheelSpeeds) = 0;
        virtual WheelSpeeds getWheelSpeeds() const = 0;
    };
}
#endif
