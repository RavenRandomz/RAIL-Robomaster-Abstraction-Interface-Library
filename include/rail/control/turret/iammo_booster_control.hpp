#ifndef RAIL_CONTROL_TURRET_I_AMMO_BOOSTER_CONTROL_HPP
#define RAIL_CONTROL_TURRET_I_AMMO_BOOSTER_CONTROL_HPP
namespace rail::control::turret
{
    /**
     * Can be used for a command to control an ammo booster
     */
    class IAmmoBoosterControl
    {
        virtual void boostOn() = 0;
        virtual void boostOff() = 0;
    };
};
#endif