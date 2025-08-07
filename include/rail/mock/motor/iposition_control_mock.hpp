#pragma once
#include "rail/motor/iposition_control.hpp"
namespace rail::motor
{
    template <typename AngularPosition>
    class IPositionControlMock:
        virtual public IPositionControl<AngularPosition>
    {
    public:
		MOCK_METHOD(void, setTargetPosition, (const AngularPosition& position), (override));
        virtual ~IPositionControlMock() {};
    };

}