#pragma once
namespace rail::chassis
{
    class IPowerLimiter
    {
    public:
        virtual double getPowerLimitRatio() const = 0;
        virtual ~IPowerLimiter() {}

    };
}