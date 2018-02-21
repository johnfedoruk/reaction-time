#include "centimeter.hpp"

Centimeter::Centimeter(double value) : Unit(value) {}

double Centimeter::toMeter() {
    return this->value * 0.01;
}