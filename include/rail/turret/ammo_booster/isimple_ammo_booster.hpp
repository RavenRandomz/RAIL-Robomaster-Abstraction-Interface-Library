#ifndef RAIL_TURRET_I_SIMPLE_AMMO_BOOSTER_HPP
#define RAIL_TURRET_I_SIMPLE_AMMO_BOOSTER_HPP
#include "isimple_ammo_booster_control.hpp"
#include "rail/system/isystem.hpp"

namespace rail::turret
{
    /**
     * This is created for backward compatibility with the fang-mcb
     * 2025 design. I have realized that it is better for the commands
     * to have control of the boosting functionality as it allows
     * various commands to have different speeds.
     * 
     * The point of a subsystem is to abstract a given component while a command
     * imbues it with a behavior. Boosting is a behavior while the
     * abstraction should have been setTargetBoostVelocity().
     * 
     * In order to allow for the refactoring process to go more smoothly,
     * this class allows for a transition into dependency injection without
     * requiring an overhaul of where the boost velocity configuration is stored
     * and whatnot
     */
    class ISimpleAmmoBooster : virtual public ISimpleAmmoBoosterControl, virtual public system::ISystem
    {
    public:
        virtual ~ISimpleAmmoBooster() {};
    };
};
#endif