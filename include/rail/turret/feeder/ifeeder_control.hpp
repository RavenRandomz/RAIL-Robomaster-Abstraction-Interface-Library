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
    class IFeederControl
    {
        virtual void feedOn() = 0;    
        virtual void feedOff() = 0;
        virtual void unjamOn() = 0;
        virtual void unjamOff() = 0;
    };
}
#endif