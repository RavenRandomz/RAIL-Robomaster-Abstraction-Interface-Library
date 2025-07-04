#ifndef RAIL_CONTROL_CHASSIS_I_QUAD_DRIVE_MOCK_HPP
#define RAIL_CONTROL_CHASSIS_I_QUAD_DRIVE_MOCK_HPP
#include "rail/control/chassis/iquad_drive.hpp"

#include <gmock/gmock.h>

namespace rail::control::chassis
{
    /**
     * Provides a uniform means of controlling 4 motors in a quad orientation.
     * This is particularly useful for the 3 main holonomic drives: omni, mecnaum, and swerve
     */

    template<class SpeedData>
    class IQuadDriveMock : virtual public IQuadDrive<SpeedData>
    {
        using WheelSpeeds = IQuadDrive<SpeedData>::WheelSpeeds;

        MOCK_METHOD(void, setTargetWheelSpeeds, (const WheelSpeeds& wheelSpeeds), (override));
        MOCK_METHOD(WheelSpeeds, getTargetWheelSpeeds, (), (const, override));
    };
}
#endif
