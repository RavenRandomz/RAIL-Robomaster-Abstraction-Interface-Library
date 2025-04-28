#ifndef IDCMOTOR_H_DFEFLLSLJJEFLKSKLFJK
#define IDCMOTOR_H_DFEFLLSLJJEFLKSKLFJK
#include "idcmotor.h"

namespace rail
{
	class DCMotorMockup : virtual public IDCMotor<double, double, double>
	{
		public:
		virtual void setWattBudget(const double& wattage) override;
		virtual double getWattBudget() const override;

		virtual void setSpeed(const double& speed) override;
		virtual double getSpeed() const override;

		virtual void setMaxSpeed(const double& maxSpeed) override;
		virtual double getMaxSpeed() const override;
		virtual void setMinSpeed(const double& minSpeed) override;
		virtual double getMinSpeed() const override;

		virtual void setTorque(const double& torque) override;
		virtual double getTorque() const override;

		virtual void setMaxTorque(const double& maxTorque) override;
		virtual double getMaxTorque() const override;
		virtual void setMinTorque(const double& minTorque) override;
		virtual double getMinTorque() const override;

		private:
		double m_wattBudget{0};
		double m_speed{0};
		double m_minSpeed{0};
		double m_maxSpeed{0};
		double m_torque{0};
		double m_maxTorque{0};
		double m_minTorque{0};
	};
}
#endif
