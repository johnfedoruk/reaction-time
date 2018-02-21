#include <iostream>
#include <string>
#include <sstream>

int main(int argc,char* argv[]) {
    int value;
    std::stringstream ss;
    std::string input;
    std::string unit;
    std::cin >> input;
    while(input.compare("q")!=0) {
        ss << input;
        ss >> value >> unit;
        std::cout << "value: " << value << " unit: " << unit << std::endl;
        ss.str("");
        ss.clear();
        std::cin >> input;
    }
    std::cout << "program terminated" << std::endl;
    return 0;
}