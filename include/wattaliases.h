#ifndef WATTAGEALIASES_H_SLDKFASDFSEFX
#define WATTAGEALIASES_H_SLDKFASDFSEFX
#include "iwattbudgeter.h"

#include <memory>
#include <vector>
namespace rail
{
	template <typename WattData>	
	using BudgeterPointer = std::shared_ptr<rail::IWattBudgeter<WattData>>;

	template <typename WattData>	
	using BudgeterVector = std::vector<BudgeterPointer<WattData>>;
}
#endif
