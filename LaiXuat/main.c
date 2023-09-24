#include <stdio.h>
#include <math.h>

int main() {
    double loanAmount;
    int numberOfYears;

    printf("Enter the loan amount: ");
    scanf("%lf", &loanAmount);

    printf("Enter the number of years: ");
    scanf("%d", &numberOfYears);

    printf("\n");
    printf("Loan Amount = %.2lf\n", loanAmount);

    printf("\n");
    printf("%10s%30s%30s\n", "Interest Rate", "Monthly Payment (RM)", "Total Payment (RM)");

    double interestRates[] = {2.5, 3.0, 3.5, 4.0, 4.5, 5.0, 5.5, 6.0, 6.5, 7.0, 7.5, 8.0, 8.5};
    int numberOfRates = sizeof(interestRates) / sizeof(interestRates[0]);

    for (int i = 0; i < numberOfRates; i++) {
        double monthlyInterestRate = interestRates[i] / 1200;
        int numberOfPayments = numberOfYears * 12;

        double monthlyPayment = (loanAmount * monthlyInterestRate) / (1 - pow(1 + monthlyInterestRate, -numberOfPayments));
        double totalPayment = monthlyPayment * numberOfPayments;

        printf("%10.2lf%30.2lf%30.2lf\n", interestRates[i], monthlyPayment, totalPayment);
    }

    return 0;
}
