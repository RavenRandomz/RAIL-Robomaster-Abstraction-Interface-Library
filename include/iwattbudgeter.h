#ifndef IWATTAGE_BUDGETERLKASDFJNVJLKVWA
#define IWATTAGE_BUDGETERLKASDFJNVJLKVWA
namespace rail
{
	template <typename T>
	class IWattBudgeter
	{
	public:
		virtual void setBudget(T wattage) = 0;
		virtual T getBudget() const = 0;
	};
}
#endif
