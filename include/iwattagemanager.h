#ifndef IWATTAGEMANAGER_H_SLKDFJKSLDFJEFMSEFSEF
#define IWATTAGEMANAGER_H_SLKDFJKSLDFJEFMSEFSEF
#include "iwattagebudgeter.h"

#include <vector>
#include <memory>
using BudgeterPointer_t = std::shared_ptr<rail::IWattageBudgeter>;
using BudgeterList_t = std::vector<BudgeterPointer_t>;
namespace rail
{
	/// Manages a collection of IWattageBudgeters
	/**
	*/
	class IWattageManager: IWattageBudgeter
	{
	public:
		/// Allocate current budget to budgeters
		/**
		 * This will set the Budgets of the budgeters
		 * That the WattageBudgeter budgets
		 */
		virtual void allocate() = 0;

		/// Get a list of all budgeters
		virtual BudgeterList_t getBudgeters() const = 0;
		virtual void addBudgeter() = 0;

		/// Add all budgeters
		/**
		 * If a budgeter is already on the list, it will be ignored
		 */
		virtual void addBudgeters(BudgeterList_t& budgeters) = 0;

		/// Set a budget
		virtual void setBudget(double wattage) override = 0;
		/// Get the budget
		virtual double getBudget() const override = 0;
	};
}
#endif
