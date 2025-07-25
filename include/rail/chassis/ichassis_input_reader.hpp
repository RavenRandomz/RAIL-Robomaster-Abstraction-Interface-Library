#ifndef RAIL_CHASSIS_I_CHASSIS_INPUT_READER_HPP
#define RAIL_CHASSIS_I_CHASSIS_INPUT_READER_HPP
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
    class IChassisInputReader
    {
    public:
        virtual Translation getTranslation() const = 0;
        virtual Rotation getRotation() const = 0;
        virtual ~IChassisInputReader() {};
    };
}
#endif