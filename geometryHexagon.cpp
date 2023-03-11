#include <iostream>
#include <cmath>

using namespace std;

int main(){
    const double pie = 3.14159;
    double area, side;

    area = (6 * side) / (4 * tan(pie/6));

    cout << "Enter the side: " << endl;
    cin >> side;

    cout << "The area of the hexagon is: " << area << endl;
    return 0;

}