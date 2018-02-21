#include "centimeter.hpp"

Centimeter::Centimeter(float value) : Unit(value) {
    // Unit::super();
}
float Centimeter::toMeter() {
    return this->value;
}