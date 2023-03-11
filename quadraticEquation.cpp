#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double a, b, c;
    cout << "Enter the coefficient of x^2: " << endl;
    cin >> a;
    cout << "Enter the coefficient of x: " << endl;
    cin >> b;
    cout << "Enter the constant term: " << endl;
    cin >> c;

    double discriminant = pow(b, 2) - 4 * a * c;

    if (discriminant > 0) {
        double root1 = (-b + pow(discriminant, 0.5)) / (2 * a);
        double root2 = (-b - pow(discriminant, 0.5)) / (2 * a);
        cout << "The equation has two real roots: " << root1 << " and " << root2 << endl;
    } else if (discriminant == 0) {
        double root = -b / (2 * a);
        cout << "The equation has one real root: " << root << endl;
    } else {
        cout << "The equation has no real roots." << endl;
    }

    return 0;
}
