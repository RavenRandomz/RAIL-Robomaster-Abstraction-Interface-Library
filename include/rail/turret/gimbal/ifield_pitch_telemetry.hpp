#pragma once

namespace rail::turret
{
    /**
     * Global, coordinate based controls for the gimbal
     */
    template <class AngularPosition>
    class IFieldPitchTelemetry
    {
    public:
        virtual AngularPosition getFieldPitch() const = 0;

        virtual ~IFieldPitchTelemetry() {};
    };
}