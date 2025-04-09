#ifndef WATTAGEALIASES_H_SLDKFASDFSEFX
#define WATTAGEALIASES_H_SLDKFASDFSEFX
#include "iwattbudgeter.h"

#include <memory>
#include <vector>
namespace rail
{
	using BudgeterPointer_t = std::shared_ptr<rail::IBudgeter>;
	using BudgeterVector_t = std::vector<BudgeterPointer_t>;
}
#endif
