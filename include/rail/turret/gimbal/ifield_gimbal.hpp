#ifndef RAIL_CONTROL_TURRET_I_FIELD_GIMBAL_HPP
#define RAIL_CONTROL_TURRET_I_FIELD_GIMBAL_HPP
#include "ifield_gimbal_control.hpp"
#include "rail/system/isystem.hpp"
namespace rail::turret
{
    /**
     * Global, coordinate based controls for the gimbal
     */
    template <class AngularPosition>
    class IFieldGimbal : virtual public IFieldGimbalControl<AngularPosition>, virtual public system::ISystem
    {
        virtual ~IFieldGimbal() = default;
    };
}
#endif