#pragma once
#include "rail/chassis/ipower_limiter.hpp"
#include "rail/mock/system/isystem_mock.hpp"
#include <gmock/gmock.h>

namespace rail::chassis
{
    class IPowerLimiterMock:
        virtual public IPowerLimiter
    {
    public:
        MOCK_METHOD(double, getPowerLimitRatio, (), (const, override));
        virtual ~IPowerLimiterMock() {}
    };
}