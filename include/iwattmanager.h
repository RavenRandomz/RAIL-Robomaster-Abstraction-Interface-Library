#ifndef IWATTAGEMANAGER_H_SLKDFJKSLDFJEFMSEFSEF
#define IWATTAGEMANAGER_H_SLKDFJKSLDFJEFMSEFSEF
#include "iwattbudgeter.h"

#include "wattaliases.h" 

namespace rail
{
	/// Manages a collection of IWattageBudgeters
	/**
	*/
	template <typename WattData>
	class IWattManager : virtual public IWattBudgeter<WattData>
	{
	public:
		/// Allocate current budget to budgeters
		/**
		 * This will set the Budgets of the budgeters
		 * That the WattageBudgeter budgets
		 */
		virtual void allocate() = 0;

		/// Get a list of all budgeters
		virtual BudgeterVector<WattData>& getBudgeters() const = 0;
		virtual void addBudgeter() = 0;

		/// Add all budgeters
		/**
		 * If a budgeter is already on the list, it will be ignored
		 */
		virtual void addBudgeters(BudgeterVector<WattData>& budgeters) = 0;

		/// Set a budget
		virtual void setWattBudget(const WattData& wattage) override = 0;
		/// Get the budget
		virtual const WattData getWattBudget() const override = 0;
		virtual ~IWattManager();
	};
}
#endif
