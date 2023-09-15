#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    // Số tiền cho vay
    double loanAmount = 10000;
   cout<<"Loan Amount = 10000"<<endl;
    // Số năm vay
    int numberOfYears = 7;
    cout<<"Number of Years: 7"<<endl;
    // Danh sách các lãi suất hàng năm
    double interestRates[] = {2.5, 3.0, 3.5, 4.0, 4.5, 5.0, 5.5, 6.0, 6.5, 7.0, 7.5, 8.0, 8.5};

    // In tiêu đề cho bảng
    cout << setw(10) << "Lãi suất" << setw(30)<< "Số tiền thanh toán hàng tháng (RM)" << setw(30) << "Tổng số tiền thanh toán (RM)" << endl;

    for (int i = 0; i < sizeof(interestRates) / sizeof(interestRates[0]); i++) {
        double monthlyInterestRate = interestRates[i] / 1200;  // Chuyển lãi suất hàng năm thành lãi suất hàng tháng
        int numberOfPayments = numberOfYears * 12;  // Tổng số lần thanh toán trong số năm

        // Tính số tiền thanh toán hàng tháng
        double monthlyPayment = (loanAmount * monthlyInterestRate) / (1 - pow(1 + monthlyInterestRate, -numberOfPayments));

        // Tính tổng số tiền thanh toán
        double totalPayment = monthlyPayment * numberOfPayments;

        // In kết quả
        cout << fixed << setprecision(2);
        cout << setw(10) << interestRates[i] << setw(30) << monthlyPayment << setw(30) << totalPayment << endl;
    }

    return 0;
}