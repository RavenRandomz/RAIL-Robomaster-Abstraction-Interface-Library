#pragma once

#include "ifield_gimbal_control_mock.hpp"
#include "rail/mock/system/isystem_mock.hpp"

namespace rail::turret
{
    /**
     * Global, coordinate based controls for the gimbal
     */
    template <class AngularPosition>
    class IFieldGimbalMock: 
        virtual public IFieldGimbalControlMock<AngularPosition>,
        virtual public system::ISystemMock
    {
    public:
        virtual ~IFieldGimbalMock() {};
    };
}