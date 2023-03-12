// Pure C++
class Car{
private:
    float mpg, gas, location;
public:
    Car(float mpg, float initial_gas);
    float travel(float speed, float time);
    void print();
};