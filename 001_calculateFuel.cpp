#include <iostream>

using namespace std;

double calculateFuel(double distance);

int main() {
    double dis_1 = 15;
    double dis_2 = 23.5;
    double dis_3 = 3;

    cout << "Fuel_1: " << calculateFuel(dis_1) << endl
         << "Fuel_2: " << calculateFuel(dis_2) << endl
         << "Fuel_3: " << calculateFuel(dis_3) << endl;

    return 0;
}

double calculateFuel(double distance) {
    double minFuel = distance * 10;
    if(minFuel >= 100) {
        return minFuel;
    }
    return 100;
}



// Problem URL:
// https://edabit.com/challenge/9rLomMgbyFZ5Yv6mE