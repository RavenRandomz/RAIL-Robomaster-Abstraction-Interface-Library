#ifndef IBUDGETERLIST_H_SLIEJFSEFILJXXNCSE
#define IBUDGETERLIST_H_SLIEJFSEFILJXXNCSE

#include "wattaliases.h"

namespace rail
{
	template <typename WattData>
	class BudgeterList
	{
	private:
		BudgeterVector<WattData> m_budgeters {};

	public:
		/// If a budgeter is already in the list it is ignored)
		/**
		 * This is determined by memory address.
		 */
		void addBudgeter(BudgeterPointer<WattData> budgeter);
		void removeBudgeter(BudgeterPointer<WattData> budgeter);

		/// Return the number of budgeters
		int getSize();
		BudgeterVector<WattData> getBudgeters();
	};
}
#endif
