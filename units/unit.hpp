#ifndef __UNIT__
#define __UNIT__

class Unit {
    public:
        Unit(float value);
        virtual float toMeter() = 0;
    protected:
        float value;
};

#endif