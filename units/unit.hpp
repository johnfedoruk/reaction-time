#ifndef __UNIT__
#define __UNIT__

class Unit {
    public:
        Unit(double value);
        virtual double toMeter() = 0;
    protected:
        double value;
};

#endif