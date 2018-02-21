#ifndef __MAIN__
#define __MAIN__

#include <string>
#include "units/unit.hpp"

Unit* unitFactory(double value, std::string unit);

double reactionTime(double d);

#endif