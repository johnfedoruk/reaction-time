#include <iostream>
#include <string>
#include <sstream>
#include "main.hpp"
#include <math.h>
#include "units/centimeter.hpp"
#include "units/inch.hpp"

const double G = 9.6;

int main(int argc,char* argv[]) {
    double value_num;
    double reaction_ms;
    double meters;
    Unit* unit;
    std::stringstream ss;
    std::string input_str;
    std::string unit_str;
    std::cin >> input_str;
    while(input_str.compare("q")!=0) {
        ss << input_str;
        ss >> value_num >> unit_str;
        unit = unitFactory(value_num,unit_str);
        if(unit!=NULL) {
            meters = unit->toMeter();
            reaction_ms = reactionTime(meters);
            std::cout << reaction_ms << "ms" << std::endl;
        }
        else {
            std::cout << "Error reading value or unit" << std::endl;
        }
        ss.str("");
        ss.clear();
        std::cin >> input_str;
    }
    std::cout << "program terminated" << std::endl;
    return 0;
}

Unit* unitFactory(double value, std::string unit) {
    if(unit.compare("cm")==0)
        return new Centimeter(value);
    if(unit.compare("\"")==0)
        return new Inch(value);
    return NULL;
}

double reactionTime(double d) {
    return sqrt( 2 * d / G ) * 1000;
}