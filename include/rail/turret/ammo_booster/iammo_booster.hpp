#ifndef RAIL_TURRET_I_AMMO_BOOSTER_HPP
#define RAIL_TURRET_I_AMMO_BOOSTER_HPP
#include "iammo_booster_control.hpp"
#include "rail/system/isystem.hpp"

namespace rail::turret
{
    /**
     * General abstraction for ammo booster subsystems
     */
    template <typename Velocity>
    class IAmmoBooster : virtual public IAmmoBoosterControl<Velocity>, virtual public system::ISystem
    {
        virtual ~IAmmoBooster() = default;
    };
};
#endif