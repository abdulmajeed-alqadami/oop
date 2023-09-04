
#include <iostream>
#include <string>

class Flight {
private:
    int flightNumber;
    std::string destination;
    float distance;
    float maxFuelCapacity;

public:

    Flight(int flightNum = 0, std::string dest = "", float dist = 0.0, float maxFuel = 0.0)
        : flightNumber(flightNum), destination(dest), distance(dist), maxFuelCapacity(maxFuel) {}


    ~Flight() {
        std::cout << "Flight " << flightNumber << " has been destroyed." << std::endl;
    }


    float CalFuel() {
        float fuelRequired;
        if (distance <= 1000) {
            fuelRequired = 500.0;
        } else if (distance <= 2000) {
            fuelRequired = 1100.0;
        } else {
            fuelRequired = 2200.0;
        }
        return fuelRequired;
    }
    void ShowInfo() {
        std::cout << "Flight Number: " << flightNumber << std::endl;
        std::cout << "Destination: " << destination << std::endl;
        std::cout << "Distance to Destination: " << distance << " km" << std::endl;
        std::cout << "Max Fuel Capacity: " << maxFuelCapacity << " liters" << std::endl;

        float requiredFuel = CalFuel();
        if (maxFuelCapacity >= requiredFuel) {
            std::cout << "Fuel capacity is sufficient for the flight." << std::endl;
        } else {
            std::cout << "Warning: Fuel capacity is insufficient for the flight." << std::endl;
        }
    }
};

int main() {

    Flight myFlight(101, "New York", 1500.0, 1200.0);


    myFlight.ShowInfo();

    return 0;
}
