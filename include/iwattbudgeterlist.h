#ifndef IBUDGETERLIST_H_SLIEJFSEFILJXXNCSE
#define IBUDGETERLIST_H_SLIEJFSEFILJXXNCSE

#include "wattaliases.h"

namespace rail
{
	class BudgeterList
	{
	private:
		BudgeterVector_t m_budgeters {};

	public:
		/// If a budgeter is already in the list it is ignored)
		/**
		 * This is determined by memory address.
		 */
		void addBudgeter(BudgeterPointer_t budgeter);
		void removeBudgeter(BudgeterPointer_t budgeter);

		/// Return the number of budgeters
		int getSize();
		BudgeterVector_t getBudgeters();
	};
}
#endif
