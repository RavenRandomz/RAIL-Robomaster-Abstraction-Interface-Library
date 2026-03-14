#pragma once

#include "ifield_pitch_telemetry.hpp"
#include "ifield_yaw_telemetry.hpp"

namespace rail::turret
{
    /**
     * Global, coordinate based controls for the gimbal
     */
    template <class AngularPosition>
    class IFieldGimbalTelemetry:
        virtual public IFieldPitchTelemetry<AngularPosition>,
        virtual public IFieldYawTelemetry<AngularPosition>
    {
    public:
        virtual ~IFieldGimbalTelemetry() {};
    };
}