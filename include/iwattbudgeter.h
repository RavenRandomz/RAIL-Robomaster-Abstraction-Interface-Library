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

		/**
		 * @brief This disables any physical action but allows the budgeter
		 * to have any functions called that would impact its estimation
		 * If it goes into overbudget, a WattManager can detect it before it acts
		 * on the overbuget settings.
		 *
		 * The user has the option to not utilize EstimateMode for higher risk.
		 */
		virtual void setWattEstimateMode(bool mode) = 0;
		virtual bool estimateModeAllowed() = 0;
		virtual bool getWattOverbudgetStatus() const = 0;
		virtual void resetWattOverbudgetStatus() = 0;
		virtual WattData getWattOverbudgetAmount() const = 0;

		virtual ~IWattBudgeter() = default;
	};
}
#endif
