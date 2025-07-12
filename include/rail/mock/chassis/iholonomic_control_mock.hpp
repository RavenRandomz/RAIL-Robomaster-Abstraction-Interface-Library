#ifndef RAIL_MOCK_CHASSIS_I_HOLONOMIC_CONTROL_MOCK_HPP
#define RAIL_MOCK_CHASSIS_I_HOLONOMIC_CONTROL_MOCK_HPP
#include "rail/chassis/iholonomic_control.hpp"
namespace rail::control::chassis
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
    class IHolonomicControlMock : public IHolonomicControl<Velocity, AngularVelocity>
    {
        MOCK_METHOD(void, setTargetTranslation, (const Velocity& velocity), (override));
        MOCK_METHOD(void, setTargetRotation, (const AngularVelocity& rotation), (override));

        MOCK_METHOD(Velocity, getTargetTranslation, (), (const, override));
        MOCK_METHOD(AngularVelocity, getTargetRotation, (), (const, override));
    };
}
#endif