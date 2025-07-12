#ifndef RAIL_CHASSIS_I_HOLONOMIC_DRIVE_MOCK_HPP
#define RAIL_CHASSIS_I_HOLONOMIC_DRIVE_MOCK_HPP
#include "iholonomic_control_mock.hpp"
#include "rail/mock/system/isystem_mock.hpp"

namespace rail::chassis
{
    /**
     * A Holonomic Drive is essentially any 2d drive that can translate
     * in any direction without having to rotate. The most common ones are:
     * mecanum, swerve, and omni 
     * Read more here: https://gm0.org/en/latest/docs/common-mechanisms/drivetrains/holonomic.html
     * It is recommended to have velocity in a class that can get
     * x and y.
     */
    template <class Velocity, class AngularVelocity>
    class IHolonomicDriveMock:
        virtual public IHolonomicDrive<Velocity, AngularVelocity>
        virtual public IHolonomicControlMock<Velocity, AngularVelocity>,
        virtual public ISystemMock
    {
    };
}
#endif
