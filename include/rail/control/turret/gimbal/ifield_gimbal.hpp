#ifndef RAIL_CONTROL_TURRET_I_FIELD_GIMBAL_HPP
#define RAIL_CONTROL_TURRET_I_FIELD_GIMBAL_HPP
namespace rail::control::turret
{
    /**
     * Global, coordinate based controls for the gimbal
     */
    template <class AngularPosition>
    class IFieldGimbal
    {
        virtual void setTargetFieldPitch(const AngularPosition& pitch) = 0;
        virtual AngularPosition getTargetFieldPitch() const = 0;

        virtual void setTargetFieldYaw(const AngularPosition& yaw) = 0;
        virtual AngularPosition getTargetFieldYaw() const = 0;
    };
}
#endif