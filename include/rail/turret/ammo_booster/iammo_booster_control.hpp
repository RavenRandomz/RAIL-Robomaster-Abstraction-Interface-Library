#ifndef RAIL_TURRET_I_AMMO_BOOSTER_CONTROL_HPP
#define RAIL_TURRET_I_AMMO_BOOSTER_CONTROL_HPP
namespace rail::turret
{
    /**
     * Can be used for a command to control an ammo booster
     */
    template <typename Velocity>
    class IAmmoBoosterControl
    {
    public:
        virtual void setTargetBoostVelocity(const &Velocity velocity) = 0;
        virtual Velocity getTargetBoostVelocity() const = 0;
    };
};
#endif