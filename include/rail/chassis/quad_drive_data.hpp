#ifndef RAIL_CONTROL_CHASSIS_QUAD_DRIVE_DATA_HPP
#define RAIL_CONTROL_CHASSIS_QUAD_DRIVE_DATA_HPP

namespace rail::chassis
{
	/**
	 *	Provides a means of bundling information such as speed, temperature, and whatnot
	 *  involving a quad drive.
	 *  This is a template in order to support the use of units libraries or primitive types
	 */
	template <typename Data>
	class QuadDriveData
	{
		Data frontLeft;
		Data frontRight;
		Data rearLeft;
		Data rearRight;
	};
}
#endif

