#pragma once

#include "ifield_pitch_info.hpp"
#include "ifield_yaw_info.hpp"

namespace rail::turret
{
    /**
     * Global, coordinate based controls for the gimbal
     */
    template <class AngularPosition>
    class IFieldGimbalInfo:
        virtual public IFieldPitchInfo<AngularPosition>,
        virtual public IFieldYawInfo<AngularPosition>
    {
    public:
        virtual ~IFieldGimbalInfo() {};
    };
}