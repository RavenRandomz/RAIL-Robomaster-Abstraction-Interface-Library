#ifndef RAIL_CONTROL_TURRET_I_AMMO_BOOSTER_HPP
#define RAIL_CONTROL_TURRET_I_AMMO_BOOSTER_HPP
#include "iammo_booster_control.hpp"

namespace rail::control::turret
{
    class IAmmoBooster : virtual public IAmmoBoosterControl
    {
        virtual ~IAmmoBooster() = default;
    };
};
#endif