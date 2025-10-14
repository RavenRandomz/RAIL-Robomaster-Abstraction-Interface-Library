#ifndef RAIL_I_ANGULAR_VELOCITY_TELEMETRY_HPP
#define RAIL_I_ANGULAR_VELOCITY_TELEMETRY_HPP
namespace rail::telemetry
{
    template <typename AngularVelocity>
    class IAngularVelocity 
    {
    public:
        virtual AngularVelocity getAngularVelocity() const = 0;
        virtual ~IAngularVelocity() {};
    };
}
#endif