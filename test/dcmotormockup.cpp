#include "dcmotormockup.h"

namespace rail
{
	void DCMotorMockup::setWattBudget(const double& wattage)
	{
		m_wattBudget = wattage;
	}

	double DCMotorMockup::getWattBudget() const
	{
		return m_wattBudget;
	}
	
	void DCMotorMockup::setSpeed(const double& speed)
	{
		m_speed = speed;
	}

	double DCMotorMockup::getSpeed() const
	{
		return m_speed;
	}
	
	void DCMotorMockup::setMaxSpeed(const double& maxSpeed)
	{
		m_maxSpeed = maxSpeed;
	}

	double DCMotorMockup::getMaxSpeed() const
	{
		return m_maxSpeed;
	}

	void DCMotorMockup::setMinSpeed(const double& minSpeed)
	{
		m_minSpeed = minSpeed;
	}

	double DCMotorMockup::getMinSpeed() const
	{
		return m_minSpeed;
	}
	
	void DCMotorMockup::setTorque(const double& torque)
	{
		m_torque = torque;
	}
	
	double DCMotorMockup::getTorque() const
	{
		return m_torque;
	}
	
	void DCMotorMockup::setMaxTorque(const double& maxTorque)
	{
		m_maxTorque = maxTorque;
	}

	double DCMotorMockup::getMaxTorque() const
	{
		return m_maxTorque;
	}

	void DCMotorMockup::setMinTorque(const double& minTorque)
	{
		m_minTorque = minTorque;
	}

	double DCMotorMockup::getMinTorque() const
	{
		return m_minTorque;
	}


	void DCMotorMockup::setReversed(bool reverse)
	{
		m_reversed = reverse;
	}

	bool DCMotorMockup::getReversed() const 
	{
		return m_reversed; 
	}

	void DCMotorMockup::setWattEstimateMode(bool mode)
	{
		
	}

	bool DCMotorMockup::getWattOverbudgetStatus() const 
	{
		return false;
	}
	void DCMotorMockup::resetWattOverbudgetStatus()
	{
	}
	double DCMotorMockup::getWattOverbudgetAmount() const
	{
		return 10.0;
	}
}
