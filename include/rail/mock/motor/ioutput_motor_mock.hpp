#pragma once

#include "ioutput_control_mock.hpp"
#include "rail/motor/ioutput_motor.hpp"
#include "rail/mock/system/isystem_mock.hpp"

namespace rail::motor
{
    template <typename OutputData>
    class IOutputMotorMock:
        virtual public IOutputMotor<OutputData>,
        virtual public IOutputControlMock<OutputData>,
        virtual public system::ISystemMock
    {
    public:
        virtual ~IOutputMotorMock() {};
    };
}