#ifndef RAIL_CHASSIS_QUAD_DRIVE_DATA_H
#define RAIL_CHASSIS_QUAD_DRIVE_DATA_H

namespace rail::control::chassis
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

