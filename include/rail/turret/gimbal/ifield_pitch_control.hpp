#ifndef RAIL_CONTROL_TURRET_I_FIELD_PITCH_CONTROL_HPP
#define RAIL_CONTROL_TURRET_I_FIELD_PITCH_CONTROL_HPP
namespace rail::turret
{
    /**
     * Global, coordinate based controls for the gimbal
     */
    template <class AngularPosition>
    class IFieldPitchControl
    {
        virtual void setTargetFieldPitch(const AngularPosition& pitch) = 0;
        virtual AngularPosition getTargetFieldPitch() const = 0;
    };
}
#endif