#include <iostream>
#include "PaymentStrategy.cc"

using namespace std;

class UPIPaymentStrategy : PaymentStrategy
{
public:
    bool processPayment(double amount) override
    {
        cout << "Paid via UPI!" << endl;
    };
};