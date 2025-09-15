#ifndef RAIL_TURRET_ITURRET_INPUT_HANDLER_HPP
#define RAIL_TURRET_ITURRET_INPUT_HANDLER_HPP
namespace rail
{
    template<typename Data>
    class ITurretInputHandler
    {
    public:
        virtual Data getPitch() const = 0;
        virtual Data getYaw() const = 0;
        virtual ~ITurretInputHandler () {}
    };
}
#endif