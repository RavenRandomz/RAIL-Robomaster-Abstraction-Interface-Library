#pragma once

namespace rail::turret
{
    /**
     * Global, coordinate based controls for the gimbal
     */
    template <class AngularPosition>
    class IFieldPitchInfo
    {
    public:
        virtual AngularPosition getTargetFieldPitch() const = 0;

        virtual ~IFieldPitchInfo() {};
    };
}