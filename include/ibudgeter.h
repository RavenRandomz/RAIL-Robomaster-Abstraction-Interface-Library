#ifndef IWATTAGE_BUDGETERLKASDFJNVJLKVWA
#define IWATTAGE_BUDGETERLKASDFJNVJLKVWA
namespace rail
{
	class IWattageBudgeter
	{
	public:
		virtual void setBudget(double wattage) = 0;
		virtual double getBudget() const = 0;
	};
}
#endif
