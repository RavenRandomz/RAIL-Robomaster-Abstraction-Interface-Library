#ifndef RAIL_MOCK_CHASSIS_I_CHASSIS_INPUT_MOCK_HPP
#define RAIL_MOCK_CHASSIS_I_CHASSIS_INPUT_MOCK_HPP
#include "rail/chassis/ichassis_input.hpp"
#include "ichassis_input_reader_mock.hpp"
#include <gmock/gmock.h>

namespace rail::chassis
{
    /**
     * This is for the abstraction for use inputs.
     * It is recommended for these inputs to be floats or doubles
     * which then converted into specific speeds by the command
     * in order to have single responsibility
     * 
     * This is a non-owning interface
     */
    template <typename Translation, typename Rotation>
    class IChassisInputMock:
        virtual public IChassisInput<Translation, Rotation>
        virtual public IChassisInputReaderMock<Translation, Rotation>,
    {
    };
}
#endif