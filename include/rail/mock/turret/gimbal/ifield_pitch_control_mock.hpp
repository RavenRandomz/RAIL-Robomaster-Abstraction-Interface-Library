#pragma once

#include "rail/turret/gimbal/ifield_pitch_control.hpp"
#include <gmock/gmock.h>

namespace rail::turret
{
    /**
     * Global, coordinate based controls for the gimbal
     */
    template <class AngularPosition>
    class IFieldPitchControlMock : virtual public IFieldPitchControl<AngularPosition>
    {
    public:
        MOCK_METHOD(void, setTargetFieldPitch, (const AngularPosition& pitch), (override));

        virtual ~IFieldPitchControlMock() {};
    };
}