#ifndef IWATTAGE_BUDGETERLKASDFJNVJLKVWA
#define IWATTAGE_BUDGETERLKASDFJNVJLKVWA
namespace rail
{
	template <typename WattData>
	class IWattBudgeter
	{
	public:
		virtual void setBudget(WattData wattage) = 0;
		virtual WattData getBudget() const = 0;
	};
}
#endif
