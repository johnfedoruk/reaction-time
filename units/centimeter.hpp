#ifndef __CENTIMETER__
#define __CENTIMETER__

#include "unit.hpp"

class Centimeter: public Unit {
    public:
        Centimeter(double value);
        double toMeter();
};

#endif