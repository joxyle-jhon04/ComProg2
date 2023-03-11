//Exercises 3

#include <iostream>
using namespace std;   

int main(){
    double weigth_lb, height_in, bmiS;
    double pound =  0.45359237;
    double inch = 0.0254;

    cout << "Enter weight in pounds: " << endl;
    cin >> weigth_lb;
    cout << "Enter height in inches: " << endl;
    cin >> height_in;

    double weight_kg =  pound * weigth_lb;
    double height_m = height_in * inch;
    double bmi = weight_kg / (height_m * height_m);

    cout << "BMI: " << bmi << endl;

}