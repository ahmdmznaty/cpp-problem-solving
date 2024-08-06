#include <iostream>

using namespace std;

int equal(int num1, int num2, int num3) {
    int result = 0;
    if(num1 == num2 && num2 == num3) {
        result = 3;
    }
    else if(num1 == num2 || num1 == num3 || num2 == num3) {
        result = 2;
    }
    else {
        result = 0;
    }
    return result;
}

int main() {
    cout << equal(3, 4, 3) << endl // 2
         << equal(1, 1, 1) << endl // 3
         << equal(3, 4, 1) << endl; // 0
    return 0;
}



// Problem URL:
// https://edabit.com/challenge/wujqD4xbL7X5Bzd5e