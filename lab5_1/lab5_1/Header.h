#pragma once

#include <cmath>

double h(const double a, const double b)

{
    return (a / (b * b + 1.)) + (1. / (a * a + b * b));
}

