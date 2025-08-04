#pragma once
#include "ipower_limiter.hpp"
#include "rail/system/isystem.hpp"
namespace rail::chassis
{
    class IPowerLimiterSystem :
        virtual public IPowerLimiter,
        virtual public system::ISystem
    {
    public:
        virtual ~IPowerLimiterSystem() {};
    };
}