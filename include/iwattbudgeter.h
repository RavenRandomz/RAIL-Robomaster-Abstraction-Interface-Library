#ifndef IWATTAGE_BUDGETERLKASDFJNVJLKVWA
#define IWATTAGE_BUDGETERLKASDFJNVJLKVWA
namespace rail
{
	template <typename WattData>
	class IWattBudgeter
	{
	public:
		virtual void setWattBudget(const WattData& wattage) = 0;
		virtual WattData getWattBudget() const = 0;
	};
}
#endif
