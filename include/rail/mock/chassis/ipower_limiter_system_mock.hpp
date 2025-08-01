#pragma once
#include "ipower_limiter_mock.hpp"
#include "rail/mock/system/isystem_mock.hpp"

namespace rail::chassis
{
    class IPowerLimiterSystemMock:
        virtual public IPowerLimiterMock,
        virtual public system::ISystemMock
    {
    public:
        virtual ~IPowerLimiterSystemMock() {};
    };
}