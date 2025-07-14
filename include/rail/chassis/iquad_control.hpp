#ifndef RAIL_CONTROL_CHASSIS_I_QUAD_CONTROL_HPP
#define RAIL_CONTROL_CHASSIS_I_QUAD_CONTROL_HPP
#include "quad_drive_data.hpp"

namespace rail::chassis
{
    /**
     * Non-owning control of a quad drive. It is rare for a taproot command
     * to directly manage a quad drive; however, for those who are not of the faint-hearted,
     * this allows such
     */
    template<class WheelSpeeds>
    class IQuadControl
    {
    public:
        virtual void setTargetWheelSpeeds(const WheelSpeeds& wheelSpeeds) = 0;
        virtual WheelSpeeds getTargetWheelSpeeds() const = 0;

        virtual ~IQuadControl() {};
    };
}
#endif
