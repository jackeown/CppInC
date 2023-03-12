// CarLib.cpp and CarLib.hpp are pure C++.
// CarLibInterface.hpp is for providing that functionality to C.
// We need CarLibInterface.cpp for mapping the interface to the C++ class methods.

struct Car;


// The header needs the extern "C" when being used in 
// cpp files, but not as a header for C.
#ifdef __cplusplus
extern "C" {
#endif

    typedef struct Car* CarHandle;
    CarHandle MakeCar(float mpg, float initial_gas);
    float MoveCar(CarHandle car, float speed, float distance);
    void PrintCar(CarHandle car);
    void DestroyCar(CarHandle car);

#ifdef __cplusplus
}
#endif