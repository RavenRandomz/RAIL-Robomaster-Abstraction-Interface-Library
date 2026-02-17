#ifndef RAIL_TURRET_I_GIMBAL_INPUT_HANDLER_MOCK_HPP
#define RAIL_TURRET_I_GIMBAL_INPUT_HANDLER_MOCK_HPP
#include "rail/turret/igimbal_input.hpp"
#include <gmock/gmock.h>

namespace rail
{
    template<typename Data>
    class IGimbalInputMock : public IGimbalInput
    {
    public:
        MOCK_METHOD(Data, getPitch, (), (const, override));
        MOCK_METHOD(Data, getYaw,, (), (const, override));

        virtual ~IGimbalInputMock() {}
    };
}
#endif