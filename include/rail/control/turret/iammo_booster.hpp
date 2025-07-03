#ifndef RAIL_CONTROL_TURRET_I_AMMO_BOOSTER_HPP
#define RAIL_CONTROL_TURRET_I_AMMO_BOOSTER_HPP
namespace rail::control::turret
{
    class IAmmoBooster
    {
        virtual void boostOn() = 0;
        virtual void boostOff() = 0;
    };
};
#endif