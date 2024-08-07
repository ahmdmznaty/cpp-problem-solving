#include <iostream>

using namespace std;

int countVowels(string str) {
    int count = 0;
    for(int i = 0; i <= str.size(); i++) {
        char le = str[i];
        string letters = "aeiou";
        if(letters.find(le) < str.size()) {
            count++;
        }
    }
    return count;
};

int main() {
    cout << countVowels("Celebration") << endl // 5
         << countVowels("Palm") << endl // 1
         << countVowels("Prediction") << endl; // 4
    return 0;
}



// Problem URL:
// https://edabit.com/challenge/jwPaBe2xjE46baPoG