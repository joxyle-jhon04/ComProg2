#include <iostream>
#include <cmath>

using namespace std;

int main(){
    const double pi = 3.14159265358979323846;
    double area, s;

    cout << "Enter the lenght of a side of the hexagon: " << endl;
    cin >> s;

    area = 6 * pow(s, 2) / (4 * tan(pi/6));
    cout << "The area of the hexagon is:" << area << endl;
    return 0;

}
