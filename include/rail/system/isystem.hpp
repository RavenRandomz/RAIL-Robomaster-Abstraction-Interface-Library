#ifndef RAIL_SYSTEMS_SYSTEM_HPP
#define RAIL_SYSTEMS_SYSTEM_HPP
namespace rail::system
{
    /**
     * A system is a component that needs to be initialized and updated.
     * This is a bit vague; however, you will find this pattern pop up everywhere.
     * 
     * For example, a motor needs to be plugged into whatever system is uses, and then, it must
     * be frequently updated to stay accurate with CAN odometry or ramping functionality.
     * 
     * It has been decided for non-taproot abstractions to be called system over "subsystem" to avoid confusion.
     * When overriding initialize for abstracted component "subsystems", the override for initialize() will count for
     * this class taproot::control::Subsystem.
     */
    class ISystem
    {
        virtual void initialize() = 0;
        virtual void update() = 0;

        virtual ~ISystem() = default;
    };
}
#endif