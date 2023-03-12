#include "CarLib.hpp"
#include "CarLibInterface.hpp"

CarHandle MakeCar(float mpg, float initial_gas){
    return new Car(mpg, initial_gas);
}

float MoveCar(CarHandle car, float speed, float time){
    return car->travel(speed, time);
}

void PrintCar(CarHandle car){
    car->print();
}

void DestroyCar(CarHandle car){
    delete car;
}