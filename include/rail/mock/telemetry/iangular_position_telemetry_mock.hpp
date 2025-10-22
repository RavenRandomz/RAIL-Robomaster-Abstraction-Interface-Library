#ifndef RAIL_TELEMETRY_I_ANGULAR_POSITION_TELEMETRY_MOCK_HPP
#define RAIL_TELEMETRY_I_ANGULAR_POSITION_TELEMETRY_MOCK_HPP

#include "rail/telemetry/iangular_position_telemetry.hpp"
#include <gmock/gmock.h>

namespace rail::telemetry
{
    template <typename AngularPosition>
    class IAngularPositionMock : public IAngularPosition<AngularPosition>
    {
    public:
        MOCK_METHOD(AngularPosition, getAngularPosition, (), (const, override));
    };
}
#endif