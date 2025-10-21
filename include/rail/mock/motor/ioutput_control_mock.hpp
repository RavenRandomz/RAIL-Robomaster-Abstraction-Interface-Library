#pragma once
#include "rail/motor/ioutput_control.hpp"

#include <gmock/gmock.h>

namespace rail::motor
{
    template <typename OutputData>
    class IOutputControlMock:
        virtual public IOutputControl<OutputData>
    {
    public:
		MOCK_METHOD(void, setTargetOutput, (const OutputData& output), (override));
        virtual ~IOutputControlMock() {};
    };

}