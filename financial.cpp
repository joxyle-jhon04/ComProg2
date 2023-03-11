#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double investmentAmount, annualInterestRate, monthlyInterestRate, futureInvestmentValue;
    int numOfYears;

    // Get user inputs
    cout << "Enter investment amount: ";
    cin >> investmentAmount;

    cout << "Enter annual interest rate in percentage: ";
    cin >> annualInterestRate;
    monthlyInterestRate = annualInterestRate / 1200;

    cout << "Enter number of years: ";
    cin >> numOfYears;

    // Calculate future investment value
    futureInvestmentValue = investmentAmount * pow((1 + monthlyInterestRate), (numOfYears * 12));

    // Display result
    cout << "Future investment value is $" << round(futureInvestmentValue * 100) / 100 << endl;

    return 0;
}
