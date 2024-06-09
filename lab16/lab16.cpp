#include <iostream>
#include <string>

using namespace std;

class Bus {
public:
    string driverName;
    string busNumber;
    int routeNumber;
    string brand;
    int yearOfOperation;
    int mileage;

    Bus(string driverName, string busNumber, int routeNumber, string brand, int yearOfOperation, int mileage) {
        this->driverName = driverName;
        this->busNumber = busNumber;
        this->routeNumber = routeNumber;
        this->brand = brand;
        this->yearOfOperation = yearOfOperation;
        this->mileage = mileage;
    }

    Bus() {}
};

void listBusesByRouteNumber(Bus buses[], int size, int routeNumber) {
    cout << "List of buses for route number " << routeNumber << ":" << endl;
    for (int i = 0; i < size; ++i) {
        if (buses[i].routeNumber == routeNumber) {
            cout << "Driver: " << buses[i].driverName << ", Bus Number: " << buses[i].busNumber << ", Brand: " << buses[i].brand
                << ", Year of Operation: " << buses[i].yearOfOperation << ", Mileage: " << buses[i].mileage << endl;
        }
    }
    cout << endl;
}

void listBusesByYearsInOperation(Bus buses[], int size, int currentYear) {
    cout << "List of buses in operation for more than 10 years:" << endl;
    for (int i = 0; i < size; ++i) {
        if (currentYear - buses[i].yearOfOperation > 10) {
            cout << "Driver: " << buses[i].driverName << ", Bus Number: " << buses[i].busNumber << ", Route Number: " << buses[i].routeNumber
                << ", Brand: " << buses[i].brand << ", Year of Operation: " << buses[i].yearOfOperation << ", Mileage: " << buses[i].mileage << endl;
        }
    }
    cout << endl;
}

void listBusesByMileage(Bus buses[], int size, int mileageThreshold) {
    cout << "List of buses with mileage more than " << mileageThreshold << " km:" << endl;
    for (int i = 0; i < size; ++i) {
        if (buses[i].mileage > mileageThreshold) {
            cout << "Driver: " << buses[i].driverName << ", Bus Number: " << buses[i].busNumber << ", Route Number: " << buses[i].routeNumber
                << ", Brand: " << buses[i].brand << ", Year of Operation: " << buses[i].yearOfOperation << ", Mileage: " << buses[i].mileage << endl;
        }
    }
    cout << endl;
}

int main() {
    const int SIZE = 5;
    Bus buses[SIZE] = {
        Bus("Smith J.", "B123", 5, "Volvo", 2010, 15000),
        Bus("Johnson A.", "B456", 3, "Mercedes", 2008, 20000),
        Bus("Williams R.", "B789", 5, "Scania", 2015, 8000),
        Bus("Jones M.", "B321", 4, "Volvo", 2012, 12000),
        Bus("Brown L.", "B654", 3, "Mercedes", 2005, 25000)
    };

    int currentYear = 2024;

    listBusesByRouteNumber(buses, SIZE, 5);
    listBusesByYearsInOperation(buses, SIZE, currentYear);
    listBusesByMileage(buses, SIZE, 10000);

    return 0;
}

