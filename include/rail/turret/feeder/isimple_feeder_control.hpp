#ifndef RAIL_TURRET_I_SIMPLE_FEEDER_CONTROL_HPP
#define RAIL_TURRET_I_SIMPLE_FEEDER_CONTROL_HPP
namespace rail::turret
{
    /**
     * Feeder/agitator interface. Allows external manual unjamming as well.
     * (I understand some codebases automatically detect jams and immeidately
     * reverse the motor).
     * 
     * This is the deprecated API that fang-robotics-mcb used in RMNA 2025.
     * It has been decided to remove behavior responsibility for subsystems
     * and only expose "control elements" while the commands implement the more
     * abstract behaviors.
     */
    class ISimpleFeederControl
    {
    public:
        virtual void feedOn() = 0;    
        virtual void feedOff() = 0;
        virtual void unjamOn() = 0;
        virtual void unjamOff() = 0;

        virtual ~ISimpleFeederControl() {};
    };
}
#endif