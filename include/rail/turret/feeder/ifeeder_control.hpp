#ifndef RAIL_CONTROL_TURRET_I_FEEDER_CONTROL_HPP
#define RAIL_CONTROL_TURRET_I_FEEDER_CONTROL_HPP
namespace rail::turret
{
    /**
     * Feeder/agitator interface. Allows external manual unjamming as well.
     * (I understand some codebases automatically detect jams and immeidately
     * reverse the motor).
     * 
     */
    template <typename FireRate>
    class IFeederControl
    {
    public:
        virtual void setTargetFireRate(const FireRate& fireRate) = 0;
        virtual FireRate getTargetFireRate() const = 0;
    };
}
#endif