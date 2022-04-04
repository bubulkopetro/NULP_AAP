#include <math.h>

#include "dod.hpp"
#include "sum.hpp"
#include "var.hpp"

using namespace nsDod;
using namespace nsVar;

void nsSum::sum()
{
    n = 0;
    a = 2 * x;
    S = a;
    do{
        n++;
        dod();
        S += a;
    } while(fabs(a) >= eps);
}
