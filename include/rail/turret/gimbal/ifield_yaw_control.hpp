#ifndef RAIL_CONTROL_TURRET_I_FIELD_YAW_CONTROL_HPP
#define RAIL_CONTROL_TURRET_I_FIELD_YAW_CONTROL_HPP
namespace rail::turret
{
    /**
     * Global, coordinate based controls for the gimbal
     */
    template <class AngularPosition>
    class IFieldYawControl
    {
    public:
        virtual void setTargetFieldYaw(const AngularPosition& yaw) = 0;

        virtual ~IFieldYawControl() {};
    };
}
#endif