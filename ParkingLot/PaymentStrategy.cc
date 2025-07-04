#include <iostream>

using namespace std;

//we want this to be an interface

class PaymentStrategy
{
public:
    virtual bool processPayment(double amount) = 0;
};