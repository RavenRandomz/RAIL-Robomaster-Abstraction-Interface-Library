#ifndef RAIL_CONTROL_CHASSIS_I_HOLONOMIC_DRIVE_HPP
#define RAIL_CONTROL_CHASSIS_I_HOLONOMIC_DRIVE_HPP
#include "iholonomic_control.hpp"
#include "rail/system/isystem.hpp"
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
    class IHolonomicDrive:
        virtual public IHolonomicControl<Velocity, AngularVelocity>,
        virtual public system::ISystem
    {
    public:
        virtual ~IHolonomicDrive() {};
    };
}
#endif
