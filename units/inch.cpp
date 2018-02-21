#include "inch.hpp"

Inch::Inch(double value) : Unit(value) {}

double Inch::toMeter() {
    return this->value * 0.0254;
}