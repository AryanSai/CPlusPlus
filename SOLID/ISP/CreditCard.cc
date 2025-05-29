/*
Interface Segregation Principle (ISP) states that no client should be forced to
depend on methods it does not use.
*/

#include <iostream>

using namespace std;
class CreditCard
{
    string cardNumber;
    string cardHolderName;
    string expiryDate;
    int cvv;

public:
    // setters and getters

    virtual void onlinePayment() = 0;
    virtual void offlinePayment() = 0;
    virtual void swipeCard() = 0;
};

class UPICompatibleCreditCard : public CreditCard
{
    void UPIPayment()
    {
        cout << "Processing UPI payment with Credit Card." << endl;
    }
};

class VisaCard : public CreditCard, public UPICompatibleCreditCard
{
};
