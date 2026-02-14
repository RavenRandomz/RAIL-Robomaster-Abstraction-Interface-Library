#ifndef RAIL_TURRET_I_GIMBAL_INPUT_HANDLER_MOCK_HPP
#define RAIL_TURRET_I_GIMBAL_INPUT_HANDLER_MOCK_HPP
#include "rail/turret/igimbal_input_handler.hpp"
#include <gmock/gmock.h>

namespace rail
{
    template<typename Data>
    class IGimbalInputHandlerMock : public IGimbalInputHandler
    {
    public:
        MOCK_METHOD(Data, getPitch, (), (const, override));
        MOCK_METHOD(Data, getYaw,, (), (const, override));

        virtual ~IGimbalInputHandlerMock() {}
    };
}
#endif