#ifndef RAIL_TELEMETRY_I_ANGULAR_VELOCITY_TELEMETRY_MOCK_HPP
#define RAIL_TELEMETRY_I_ANGULAR_VELOCITY_TELEMETRY_MOCK_HPP

#include "rail/telemetry/iangular_velocity_telemetry.hpp"
#include <gmock/gmock.h>

namespace rail::telemetry
{
    template <typename AngularVelocity>
    class IAngularVelocityMock : public IAngularVelocity<AngularVelocity>
    {
    public:
        MOCK_METHOD(AngularVelocity, getAngularVelocity, (), (const, override));
    };
}
#endif