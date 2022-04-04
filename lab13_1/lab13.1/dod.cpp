#include "dod.hpp"
#include "var.hpp"

using namespace nsVar;

void nsDod::dod()
{
    a *= x * x * (2. * n - 1) / (2. * n + 1);
}
