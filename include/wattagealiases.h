#ifndef WATTAGEALIASES_H_SLDKFASDFSEFX
#define WATTAGEALIASES_H_SLDKFASDFSEFX
#include "iwattagebudgeter.h"

#include <memory>
#include <vector>
namespace rail
{
using BudgeterPointer_t = std::shared_ptr<rail::IWattageBudgeter>;
using BudgeterVector_t = std::vector<BudgeterPointer_t>;
}
#endif
