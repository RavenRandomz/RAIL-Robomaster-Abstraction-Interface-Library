#pragma once

#include "rail/turret/gimbal/ifield_yaw_control.hpp"
#include <gmock/gmock.h>

namespace rail::turret
{
    /**
     * Global, coordinate based controls for the gimbal
     */
    template <class AngularPosition>
    class IFieldYawControlMock : virtual public IFieldYawControl<AngularPosition>
    {
    public:
        MOCK_METHOD(void, setTargetFieldYaw, (const AngularPosition& yaw), (override));

        virtual ~IFieldYawControlMock() {};
    };
}