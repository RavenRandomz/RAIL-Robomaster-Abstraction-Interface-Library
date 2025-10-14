#ifndef RAIL_I_ANGULAR_POSITION_TELEMETRY_HPP
#define RAIL_I_ANGULAR_POSITION_TELEMETRY_HPP
namespace rail::telemetry
{
    template <typename AngularPosition>
    class IAngularPosition
    {
    public:
        virtual AngularPosition getAngularPosition() const = 0;
        virtual ~IAngularPosition() {};
    };
}
#endif