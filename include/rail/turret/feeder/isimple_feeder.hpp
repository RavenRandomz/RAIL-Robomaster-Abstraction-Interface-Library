#ifndef RAIL_TURRET_I_SIMPLE_FEEDER_HPP
#define RAIL_TURRET_I_SIMPLE_FEEDER_HPP
#include "isimple_feeder_control.hpp"
#include "rail/system/isystem.hpp"
namespace rail::turret
{
    /**
     * Intermediate deprecated feeder api used in fang-robotics-mcb in rmna 2025
     */
    class ISimpleFeeder : virtual public ISimpleFeederControl, virtual public system::ISystem
    {
    public:
        virtual ~ISimpleFeeder() {};
    };
}
#endif