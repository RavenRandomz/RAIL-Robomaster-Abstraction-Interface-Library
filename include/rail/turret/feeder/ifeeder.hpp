#ifndef RAIL_CONTROL_TURRET_I_FEEDER_HPP
#define RAIL_CONTROL_TURRET_I_FEEDER_HPP
#include "ifeeder_control.hpp"
#include "rail/system/isystem.hpp"
namespace rail::turret
{
    /**
     * Owning class for general feeders
     */
    template <typename FireRate>
    class IFeeder : virtual public IFeederControl<FireRate>, virtual public system::ISystem
    {
        virtual ~IFeeder() = default;
    };
}
#endif