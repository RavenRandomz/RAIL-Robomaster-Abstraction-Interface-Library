#ifndef RAIL_CONTROL_TURRET_I_FEEDER_HPP
#define RAIL_CONTROL_TURRET_I_FEEDER_HPP
namespace rail::control::turret
{
    /**
     * Feeder/agitator interface. Allows external manual unjamming as well.
     * (I understand some codebases automatically detect jams and immeidately
     * reverse the motor) 
     */
    class IFeeder
    {
        virtual void feedOn() = 0;    
        virtual void feedOff() = 0;
        virtual void unjamOn() = 0;
        virtual void unjamOff() = 0;

    };
}
#endif