#ifndef IWATTAGEMANAGER_H_SLKDFJKSLDFJEFMSEFSEF
#define IWATTAGEMANAGER_H_SLKDFJKSLDFJEFMSEFSEF
#include "iwattbudgeter.h"

#include "wattaliases.h" 

#include <vector>
#include <memory>
namespace rail
{
	/// Manages a collection of IWattageBudgeters
	/**
	*/
	class IWattManager: IWattBudgeter 
	{
	public:
		/// Allocate current budget to budgeters
		/**
		 * This will set the Budgets of the budgeters
		 * That the WattageBudgeter budgets
		 */
		virtual void allocate() = 0;

		/// Get a list of all budgeters
		virtual BudgeterVector_t getBudgeters() const = 0;
		virtual void addBudgeter() = 0;

		/// Add all budgeters
		/**
		 * If a budgeter is already on the list, it will be ignored
		 */
		virtual void addBudgeters(BudgeterVector_t& budgeters) = 0;

		/// Set a budget
		virtual void setBudget(double wattage) override = 0;
		/// Get the budget
		virtual double getBudget() const override = 0;
	};
}
#endif
