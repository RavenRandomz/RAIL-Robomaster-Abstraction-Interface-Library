#ifndef RAIL_TURRET_GIMBAL_I_FIELD_PITCH_SYSTEM_HPP
#define RAIL_TURRET_GIMBAL_I_FIELD_PITCH_SYSTEM_HPP
#include "ifield_pitch_control.hpp"
#include "rail/system/isystem.hpp"
namespace rail::turret
{
    /**
     * This allows a gimbal to be constructed from a separate pitch and
     * yaw system. This is desireable because the pitch and yaw turret
     * can achieve global coordinates in many ways - with imus or dead
     * reckoning.
     */
    template <typename AngularPosition>
    class IFieldPitchSystem:
        virtual public IFieldPitchControl<AngularPosition>,
        virtual public system::ISystem
    {
    public:
        virtual ~IFieldPitchSystem() {};
    };
}
#endif