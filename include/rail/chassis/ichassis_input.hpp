#ifndef RAIL_CHASSIS_I_CHASSIS_INPUT_HPP
#define RAIL_CHASSIS_I_CHASSIS_INPUT_HPP
#include "ichassis_input_reader.hpp"

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
    class IChassisInput : virtual public IChassisInputReader<Translation, Rotation>
    {
    public:
        ~IChassisInput() {};
    };
}
#endif