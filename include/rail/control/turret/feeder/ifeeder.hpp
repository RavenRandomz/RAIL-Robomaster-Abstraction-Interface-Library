#ifndef RAIL_CONTROL_TURRET_I_FEEDER_HPP
#define RAIL_CONTROL_TURRET_I_FEEDER_HPP
#include "ifeeder_control.hpp"

namespace rail::control::turret
{
    /**
     * Owning class for general feeders
     */
    class IFeeder : virtual public IFeederControl
    {
        virtual ~IFeeder() = default;
    };
}
#endif