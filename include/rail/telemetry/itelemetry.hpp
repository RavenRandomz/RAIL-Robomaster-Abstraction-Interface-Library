#ifndef RAIL_TELEMETRY_I_TELEMETRY_HPP
#define RAIL_TELEMETRY_I_TELEMETRY_HPP

namespace rail::telemetry
{
    template <typename DataType>
    class ITelemetry
    {
    public:
        virtual DataType getData() const = 0;
        virtual ~ITelemetry() {};
    };
}
#endif