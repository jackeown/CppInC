#include <iostream>
#include <algorithm>
#include "CarLib.hpp"


// Simple Example Car Class (Pure C++)
Car::Car(float mpg, float initial_gas){
    this->mpg = mpg;
    this->gas = initial_gas;
    this->location = 0;
}

// Returns distance *actually* travelled
float Car::travel(float speed, float time){
    float max_can_travel = gas*mpg;
    float miles_traveled = std::min(speed*time, max_can_travel);
    float gas_used = miles_traveled / this->mpg;
    this->gas -= gas_used;
    this->location += miles_traveled;
    return miles_traveled;
}

void Car::print(){
    std::cout << "mpg: " << mpg << std::endl;
    std::cout << "gas: " << gas << std::endl;
    std::cout << "location: " << location << std::endl << std::endl;
}

