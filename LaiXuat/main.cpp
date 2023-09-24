#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    double LoanAmount;
    double numberOfYears;

    cout << "LoanAmount: ";
    cin >> LoanAmount;

    cout << "nnumberOfYears ";
    cin >> numberOfYears;

    cout << endl;
    cout << setw(10) << "Interest Rate" << setw(30) << "Monthly Payment (RM)" << setw(30) << "Total Payment (RM)" << endl;

    double interestRates[] = {2.5, 3.0, 3.5, 4.0, 4.5, 5.0, 5.5, 6.0, 6.5, 7.0, 7.5, 8.0, 8.5};
    int numberOfRates = sizeof(interestRates) / sizeof(interestRates[0]);

    for (int i = 0; i < numberOfRates; i++) {
        double monthlyInterestRate = interestRates[i] / 1200;
        int numberOfPayments = numberOfYears * 12;

        double monthlyPayment = (LoanAmount * monthlyInterestRate) / (1 - pow(1 + monthlyInterestRate, -numberOfPayments));
        double totalPayment = monthlyPayment * numberOfPayments;
        cout << fixed << setprecision(1);
        cout << setw(10) << interestRates[i] << setw(30) << monthlyPayment << setw(30) << totalPayment << endl;
    }

    return 0;
}
