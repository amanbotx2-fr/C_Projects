This mini project is a simple ATM (Automated Teller Machine) simulation written in C. It allows a user to perform basic banking operations after entering a valid PIN.

Features
PIN-based login system (default PIN: 1234)

Check balance

Deposit money

Withdraw money (with balance check)

Exit option with loop control

Menu-driven using do-while loop

Initial Setup
The default balance is initialized to ₹10,000

The default PIN is 1234

Code Logic Summary
PIN Verification
The user is prompted to enter a PIN. If the entered PIN is incorrect, the program terminates with an "Access Denied" message.

ATM Menu Loop
If the correct PIN is entered, a looped menu is shown with four options:

Check Balance: Displays the current balance.

Deposit Money: Adds the entered amount to the balance (must be greater than 0).

Withdraw Money: Deducts from the balance if sufficient and valid (must be greater than 0).

Exit: Exits the loop and ends the program.

Input Validation
Ensures valid and safe deposit/withdraw operations (e.g., prevents negative or excessive withdrawals).