#include <iostream>
using namespace std;

class vehicle {
public:
    void travel() {
        cout << "It is a vehicle class" << endl;
    }
};

class car : public vehicle {
public:
    void car_travel() {
        cout << "It is a car class" << endl;
    }
};

class fare {
public:
    void fare_a() {
        cout << "It is a fare class" << endl;
    }
};

class bus : public vehicle, public fare {
public:
    void bus_travel() {
        cout << "It is a bus class" << endl;
    }
};

int main() {
    car obj1;
    bus obj2;
    fare obj3;

    obj1.travel();
    obj1.car_travel();

    obj2.travel();
    obj2.bus_travel();
    obj2.fare_a();

    obj3.fare_a();

    return 0;
}
