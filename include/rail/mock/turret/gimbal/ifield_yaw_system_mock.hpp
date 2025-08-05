#pragma once
#include "ifield_yaw_control_mock.hpp"
#include "rail/turret/gimbal/ifield_yaw_system.hpp"
#include "rail/mock/system/isystem_mock.hpp"
namespace rail::turret
{
    /**
     * This allows a gimbal to be constructed from a separate pitch and
     * yaw system. This is desireable because the pitch and yaw turret
     * can achieve global coordinates in many ways - with imus or dead
     * reckoning.
     */
    template <typename AngularPosition>
    class IFieldYawSystemMock:
        virtual public IFieldYawSystem<AngularPosition>,
        virtual public IFieldYawControlMock<AngularPosition>,
        virtual public system::ISystemMock
    {
    public:
        virtual ~IFieldYawSystemMock() {};
    };
}