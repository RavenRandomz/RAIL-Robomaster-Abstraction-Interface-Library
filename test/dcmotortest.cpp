#include "gtest/gtest.h"
#include "dcmotormockup.h"

TEST(basicsetterGetter, DCMotor)
{
	rail::DCMotorMockup motor{};
	EXPECT_DOUBLE_EQ(motor.getTorque(), 0.0);
	EXPECT_DOUBLE_EQ(motor.getSpeed(), 0.0);
	EXPECT_DOUBLE_EQ(motor.getWattBudget(), 0.0);

	motor.setWattBudget(10);

	motor.setTorque(9);
	motor.setMinTorque(1);
	motor.setMaxTorque(100);

	motor.setSpeed(8);
	motor.setMinSpeed(2);
	motor.setMaxSpeed(1000);

	EXPECT_DOUBLE_EQ(motor.getWattBudget(), 10);

	EXPECT_DOUBLE_EQ(motor.getTorque(), 9);
	EXPECT_DOUBLE_EQ(motor.getMinTorque(), 1);
	EXPECT_DOUBLE_EQ(motor.getMaxTorque(), 100);

	EXPECT_DOUBLE_EQ(motor.getSpeed(), 8);
	EXPECT_DOUBLE_EQ(motor.getMinSpeed(), 2);
	EXPECT_DOUBLE_EQ(motor.getMaxSpeed(), 1000);
}
