#ifndef RAIL_MOCK_CHASSIS_I_CHASSIS_INPUT_READER_MOCK_HPP
#define RAIL_MOCK_CHASSIS_I_CHASSIS_INPUT_READER_MOCK_HPP
#include "rail/chassis/ichassis_input_reader.hpp"
#include <gmock/gmock.h>

namespace rail::chassis
{
    /**
     * This is for the abstraction for use inputs.
     * It is recommended for these inputs to be floats or doubles
     * which then converted into specific speeds by the command
     * in order to have single responsibility
     */
    template <typename Translation, typename Rotation>
    class IChassisInputReaderMock : public  IChassisInputReader<Translation, Rotation>
    {
    public:
        MOCK_METHOD(Translation, getTranslation, (), (const, override)); 
        MOCK_METHOD(Rotation, getRotation, (), (const, override));
    };
}
#endif