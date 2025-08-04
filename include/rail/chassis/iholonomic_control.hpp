#ifndef RAIL_CONTROL_CHASSIS_I_HOLONOMIC_CONTROL_HPP
#define RAIL_CONTROL_CHASSIS_I_HOLONOMIC_CONTROL_HPP
namespace rail::chassis
{
    /**
     * Provides non-owning control of a holonomic drive.
     * This is especially useful with taproot commands as it
     * does not grant access to unnecessary portions of the api
     * such as update().
     */
    template <class Velocity, class AngularVelocity>
    class IHolonomicControl
    {
    public:
        virtual void setTargetTranslation(const Velocity& velocity) = 0;
        virtual void setTargetRotation(const AngularVelocity& rotation) = 0;

        virtual ~IHolonomicControl() {};
    };
}
#endif