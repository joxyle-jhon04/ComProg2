//Exercises 1

#include <iostream>
using namespace std;

int main(){
    double radius, lenght;
    double area, volume;
    const double pie = 3.14159;

    cout << "Enter radius: " << endl;
    cin >> radius;
    cout << "Enter lenght: " << endl;
    cin >> lenght;

    area = radius * radius * pie;
    volume = area * lenght;

    cout << "The area of the circle is: " << area << endl;
    cout << "The volume of the cylinder is:" << volume << endl;
}