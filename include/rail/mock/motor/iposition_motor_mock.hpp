#pragma once

#include "iposition_control_mock.hpp"
#include "rail/motor/iposition_motor.hpp"
#include "rail/mock/system/isystem_mock.hpp"

namespace rail::motor
{
    template <typename AngularPosition>
    class IPositionMotorMock:
        virtual public IPositionMotor<AngularPosition>,
        virtual public IPositionControlMock<AngularPosition>
        virtual public system::ISystemMock,
    {
    public:
        virtual ~IPositionMotorMock() {};
    };
}