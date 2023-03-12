#include "CarLibInterface.hpp"

int main(void){
    CarHandle car = MakeCar(30, 60);

    PrintCar(car);
    MoveCar(car, 30, 1); // Go 30 miles per hour for an hour.
    PrintCar(car);
    MoveCar(car, 60, 1); // Go 60 miles per hour for an hour.
    PrintCar(car);
    DestroyCar(car);

}