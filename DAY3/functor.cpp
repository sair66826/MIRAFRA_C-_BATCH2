#include <iostream>
#include <vector>
#include <algorithm>
class BankAccount
{
  private:
        double balance;
  public:
        // Constructor to initialize balance
         BankAccount(double initialBalance) : balance(initialBalance) {}
        // Getter for balance
         double getBalance() const
	 {
            return balance;
         }
        // Method to update balance (used by functor)
        void updateBalance(double newBalance)
       	{
          balance = newBalance;
        }
       // Display balance
        void display() const
       	{
                 std::cout << "Balance: $" << balance << std::endl;
         }
};
       // Functor to apply interest to a BankAccount object
class ApplyInterest
 {
          private:
                 double interestRate; // e.g., 0.05 for 5%
          public:
               // Constructor to initialize interest rate
               ApplyInterest(double rate) : interestRate(rate) {}
               // Overload the () operator to apply interest to a BankAccount
              void operator()(BankAccount& account) const
	      {
                 double newBalance = account.getBalance() * (1 + interestRate);
                 account.updateBalance(newBalance);
              }
};
int main() 
{
    // Create a few BankAccount objects
    std::vector<BankAccount> accounts = {
    BankAccount(1000.0),
    BankAccount(1500.0),
    BankAccount(2000.0)
         };
     std::cout << "Balances before interest:\n";
     for (const auto& account : accounts)
     {
          account.display();
      }
     // Apply a 5% interest to all accounts
            std::for_each(accounts.begin(), accounts.end(), ApplyInterest(0.05));
            std::cout << "\nBalances after applying 5% interest:\n";
     for (const auto& account : accounts)
     {
             account.display();
      }
return 0;
}
