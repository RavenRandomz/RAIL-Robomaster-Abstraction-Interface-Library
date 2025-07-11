#ifndef RAIL_CONTROL_TURRET_I_AMMO_BOOSTER_HPP
#define RAIL_CONTROL_TURRET_I_AMMO_BOOSTER_HPP
#include "iammo_booster_control.hpp"
#include "rail/systems/isystem.hpp"

namespace rail::control::turret
{
    class IAmmoBooster : virtual public IAmmoBoosterControl, virtual public systems::ISystem
    {
        virtual ~IAmmoBooster() = default;
    };
};
#endif