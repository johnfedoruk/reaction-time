#include <iostream>
#include <string>
#include <sstream>
#include "main.hpp"
#include "units/centimeter.hpp"
#include <math.h>

const double G = 9.6;

int main(int argc,char* argv[]) {
    double value_num;
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
            std::cout << unit->toMeter() << std::endl;
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
    return NULL;
}

double reactionTime(double d) {
    return sqrt( 2 * d / G ) * 1000;
}