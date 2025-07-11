#ifndef RAIL_CONTROL_TURRET_I_FIELD_GIMBAL_CONTROL_HPP
#define RAIL_CONTROL_TURRET_I_FIELD_GIMBAL_CONTROL_HPP
#include "ifield_pitch_control.hpp"
#include "ifield_yaw_control.hpp"
namespace rail::control::turret
{
    /**
     * Global, coordinate based controls for the gimbal
     */
    template <class AngularPosition>
    class IFieldGimbalControl:
        virtual public IFieldPitchControl<AngularPosition>,
        virtual public IFieldYawControl<AngularPosition>
    {
    };
}
#endif