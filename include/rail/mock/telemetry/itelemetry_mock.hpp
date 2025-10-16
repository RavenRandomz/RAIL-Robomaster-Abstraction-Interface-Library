#ifndef RAIL_MOCK_TELEMETRY_I_TELEMETRY_MOCK_HPP
#define RAIL_MOCK_TELEMETRY_I_TELEMETRY_MOCK_HPP

#include "rail/telemetry/itelemetry.hpp"
#include <gtest/gtest.h>

namespace rail::telemetry
{
    template <typename DataType>
    class ITelemetryMock : virtual public ITelemetry<DataType>
    {
    public:
        MOCK_METHOD(DataType, getData, (), (const, override));
    };
}
#endif