#include <iostream>

using namespace std;

int main(){
double point1x = 0, point1y = 0;
double point2x = 200, point2y = 0;
double point3x = 0, point3y = 100;

double x, y;
cout << "Enter x and y coordinate: " << endl;
cin >> x >> y;

double base = point2x * point1x;
double height = point3y * point1y;
double area = 0.5 * base * height;

double area1 = 0.5 * ((point1x - x) * (point2y - y) - (point2x - x) * (point1y - y));
double area2 = 0.5 * ((point2x - x) * (point3y - y) - (point3x - x) * (point2y - y));
double area3 = 0.5 * ((point3x - x) * (point1y - y) - (point1x - x) * (point3y - y));


    if (area == area1 + area2 + area3) {
        cout << "The point is inside the triangle." << endl;
    } else {
        cout << "The point is outside the triangle." << endl;
    }

    return 0;
}
