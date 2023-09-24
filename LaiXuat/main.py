loan_amount = float(input("Enter the loan amount (RM): "))
number_of_years = int(input("Enter the number of years: "))

interest_rates = [2.5, 3.0, 3.5, 4.0, 4.5, 5.0, 5.5, 6.0, 6.5, 7.0, 7.5, 8.0, 8.5]

print("Interest Rate\tMonthly Payment (RM)\tTotal Payment (RM)")

for rate in interest_rates:
    monthly_interest_rate = rate / 1200
    number_of_payments = number_of_years * 12

    monthly_payment = (loan_amount * monthly_interest_rate) / (1 - (1 + monthly_interest_rate) ** -number_of_payments)
    total_payment = monthly_payment * number_of_payments

    print(f"{rate:.2f}\t\t{monthly_payment:.2f}\t\t\t{total_payment:.2f}")
