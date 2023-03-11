#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    if (num2 == 0 ){
        cout << "Error: Division by zero" << endl;
    } else if (num1 % num2 == 0) {
        cout << num1 << " is divisible by " << num2 << endl;
    } else {
        cout << "Error: Division by zero" << endl;
    }
    return 0;
}
