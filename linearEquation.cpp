#include <iostream>

using namespace std;  

int main(){
    
    double a, b, c, d, e, f, solve_x, solve_y;
    cout << "Enter a, b, c, d, e, f: ";
    cin >> a >> b >> c >> d >> e >> f;

    solve_x = (e*d - b*f)/(a*d - b*c);
    solve_y = (a*f - e*c)/(a*d - b*c);

    if (a*d - b*c == 0){
        cout << "The equation has no solution." << endl;
    } else {
        cout << "x is " << solve_x << " y is " << solve_y << endl;
    }

    return 0;
}