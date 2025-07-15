#include <iostream>
#include "PaymentStrategy.cc"
#include <exception>

using namespace std;

class Payment
{
private:
    double amount;
    PaymentStrategy *paymentStrategy;
    Payment(double _amount, PaymentStrategy *_paymentStrategy) : amount(_amount), paymentStrategy(_paymentStrategy)
    {
    }

    // process the payment using the assigned strategy
    void processPayment()
    {
        if (amount > 0)
            paymentStrategy->processPayment(amount);
        else
            throw exception();
    }
};