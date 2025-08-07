#pragma once

namespace rail::turret
{
    /**
     * Global, coordinate based controls for the gimbal
     */
    template <class AngularPosition>
    class IFieldYawInfo
    {
    public:
        virtual AngularPosition getTargetFieldYaw() const = 0;

        virtual ~IFieldYawInfo() {};
    };
}