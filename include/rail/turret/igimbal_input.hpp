#ifndef RAIL_TURRET_I_GIMBAL_INPUT_HPP
#define RAIL_TURRET_I_GIMBAL_INPUT_HPP
namespace rail
{
    template<typename Data>
    class IGimbalInput
    {
    public:
        virtual Data getPitch() const = 0;
        virtual Data getYaw() const = 0;
        virtual ~IGimbalInputHandler () {}
    };
}
#endif