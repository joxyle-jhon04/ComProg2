#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double x1, x2, y1, y2;
    
    cout << "Enter point 1 (latitude and longitude in degress: " << endl;
    cin >> x1 >> x2;
    cout << "Enter point 2 (latitude and longitude in degress: " << endl;
    cin >> y1 >> y2;

    double radius = 6378.1;
    double d = radius * acos(sin(x1) * (sin(x2) + cos(x1) * cos(x2) * cos(y1-y2)));

    cout << d;
    return 0;
    
}