#ifndef RAIL_CONTROL_CHASSIS_I_QUAD_DRIVE_MOCK_HPP
#define RAIL_CONTROL_CHASSIS_I_QUAD_DRIVE_MOCK_HPP
#include "rail/chassis/iquad_drive.hpp"
#include "rail/mock/system/isystem_mock.hpp"

#include <gmock/gmock.h>

namespace rail::chassis
{
    /**
     * Provides a uniform means of controlling 4 motors in a quad orientation.
     * This is particularly useful for the 3 main holonomic drives: omni, mecnaum, and swerve
     */

    template<typename WheelSpeeds>
    class IQuadDriveMock :
        virtual public IQuadDrive<WheelSpeeds>,
        virtual public system::ISystemMock
    {
    public:
        MOCK_METHOD(void, setTargetWheelSpeeds, (const WheelSpeeds& wheelSpeeds), (override));
    };
}
#endif
