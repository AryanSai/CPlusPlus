#include <iostream>
#include "PaymentStrategy.cc"

using namespace std;

class CashPaymentStrategy : PaymentStrategy
{
public:
    bool processPayment(double amount) override
    {
        cout << "Paid in cash!" << endl;
    };
};