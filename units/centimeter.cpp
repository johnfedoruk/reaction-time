#include "centimeter.hpp"

Centimeter::Centimeter(double value) : Unit(value) {
    // Unit::super();
}
double Centimeter::toMeter() {
    return this->value * 0.001;
}