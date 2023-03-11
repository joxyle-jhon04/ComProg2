//Exercise 2

#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;

    cout << "Enter an integer between 0 and 1000: " << endl;
    cin >> num;

    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }

cout << "The sum of digits in the integer is " << sum << endl;
return 0;
}