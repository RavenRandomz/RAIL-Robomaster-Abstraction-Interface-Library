#pragma once

namespace rail::turret
{
    /**
     * Global, coordinate based controls for the gimbal
     */
    template <class AngularPosition>
    class IFieldYawTelemetry
    {
    public:
        virtual AngularPosition getFieldYaw() const = 0;

        virtual ~IFieldYawTelemetry() {};
    };
}