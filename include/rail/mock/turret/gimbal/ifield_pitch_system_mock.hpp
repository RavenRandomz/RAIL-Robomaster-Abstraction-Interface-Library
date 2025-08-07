#pragma once

#include "rail/turret/gimbal/ifield_pitch_system.hpp"
#include "ifield_pitch_control_mock.hpp"
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
    class IFieldPitchSystemMock:
        virtual public IFieldPitchSystem<AngularPosition>,
        virtual public IFieldPitchControlMock<AngularPosition>,
        virtual public system::ISystemMock
    {
    public:
        virtual ~IFieldPitchSystemMock() {};
    };
}