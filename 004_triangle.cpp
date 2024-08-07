#include <iostream>

using namespace std;

int triangle(int index) {
    int value = 0;
    for(int ind = 0; ind <= index; ind++) {
        value = value + ind;
    }
    return value;
}

int main() {
    cout << triangle(1) << endl // 1
         << triangle(6) << endl // 21
         << triangle(215) << endl; // 23220
    return 0;
}



// Problem URL:
// https://edabit.com/challenge/M7Xzr3ez5xBPTu3bq