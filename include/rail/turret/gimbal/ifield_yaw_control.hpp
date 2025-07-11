#ifndef RAIL_CONTROL_TURRET_I_FIELD_YAW_CONTROL_HPP
#define RAIL_CONTROL_TURRET_I_FIELD_YAW_CONTROL_HPP
namespace rail::control::turret
{
    /**
     * Global, coordinate based controls for the gimbal
     */
    template <class AngularPosition>
    class IFieldYawControl
    {
        virtual void setTargetFieldYaw(const AngularPosition& yaw) = 0;
        virtual AngularPosition getTargetFieldYaw() const = 0;
    };
}
#endif