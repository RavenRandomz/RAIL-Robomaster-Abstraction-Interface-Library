#ifndef RAIL_CONTROL_TURRET_I_AMMO_BOOSTER_HPP
#define RAIL_CONTROL_TURRET_I_AMMO_BOOSTER_HPP
#include "iammo_booster_control.hpp"
#include "rail/system/isystem.hpp"

namespace rail::turret
{
    class IAmmoBooster : virtual public IAmmoBoosterControl, virtual public system::ISystem
    {
        virtual ~IAmmoBooster() = default;
    };
};
#endif