#ifndef RAIL_CONTROL_CHASSIS_I_HOLONOMIC_DRIVE_HPP
#define RAIL_CONTROL_CHASSIS_I_HOLONOMIC_DRIVE_HPP
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
    class IHolonomicDrive
    {
        virtual void setTargetTranslation(const Velocity& velocity) = 0;
        virtual void setTargetRotation(const AngularVelocity& rotation) = 0;
    };
}
#endif