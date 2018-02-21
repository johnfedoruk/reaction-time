#ifndef __INCH__
#define __INCH__

#include "unit.hpp"

class Inch: public Unit {
    public:
        Inch(double value);
        ~Inch() {};
        double toMeter();
};

#endif