//Exercises 4

#include <iostream>
using namespace std;   


int main(){
    double distance, gallon_m, cost, costOD;
    
    cout << "Enter the driving distance: " << endl;
    cin >> distance;
    cout << "Enter miles per gallon: " << endl;
    cin >> gallon_m;
    cout << "Enter price per gallon: ";
    cin >> cost;

    costOD = (distance / gallon_m) * cost;
    cout << "Cost of driving is $" << costOD << endl; 

    return 0;

}