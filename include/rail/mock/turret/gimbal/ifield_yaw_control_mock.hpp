#pragma once

#include "rail/turret/gimbal/ifield_yaw_control.hpp"

namespace rail::turret
{
    /**
     * Global, coordinate based controls for the gimbal
     */
    template <class AngularPosition>
    class IFieldYawControlMock : virtual public IFieldYawControl
    {
    public:
        MOCK_METHOD(void, setTargetFieldYaw, (const AngularPosition& yaw), (const, override));

        virtual ~IFieldYawControlMock() {};
    };
}