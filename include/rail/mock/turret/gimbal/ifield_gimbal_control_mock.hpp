#pragma once

#include "rail/turret/gimbal/ifield_gimbal_control.hpp"
#include "ifield_pitch_control_mock.hpp"
#include "ifield_yaw_control_mock.hpp"

namespace rail::turret
{
    /**
     * Global, coordinate based controls for the gimbal
     */
    template <class AngularPosition>
    class IFieldGimbalControlMock:
        virtual public IFieldGimbalControl<AngularPosition>,
        virtual public IFieldPitchControlMock<AngularPosition>,
        virtual public IFieldYawControl<AngularPosition>
    {
    public:
        virtual ~IFieldGimbalControlMock() {};
    };
}