#include <iostream>
#include <vector>

using namespace std;

int getAbsSum(vector<int> arr) {
    int sum = 0;
    for(size_t i = 0; i < arr.size(); i++) {
        if(arr[i] >= 0) {
            sum += arr[i];
        }
        else {
            sum += -arr[i];
        }
    }
    return sum;
}

int main() {
    cout << getAbsSum(vector<int>{2, -1, 4, 8, 10}) << endl // 25
         << getAbsSum(vector<int>{-3, -4, -10, -2, -3}) << endl // 22
         << getAbsSum(vector<int>{2, 4, 6, 8, 10}) << endl // 30
         << getAbsSum(vector<int>{-1}) << endl; // 1
    return 0;
}



// Problem URL:
// https://edabit.com/challenge/jBFpjEG3tvsjTZbD4