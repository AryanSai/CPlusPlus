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

class VisaCard : public CreditCard
{
public:
    void onlinePayment() override
    {
        cout << "Processing online payment with Visa Card." << endl;
    }

    void offlinePayment() override
    {
        cout << "Processing offline payment with Visa Card." << endl;
    }

    void swipeCard() override
    {
        cout << "Swiping Visa Card." << endl;
    }
};

class MasterCard : public CreditCard
{
public:
    void onlinePayment() override
    {
        cout << "Processing online payment with MasterCard." << endl;
    }

    void offlinePayment() override
    {
        cout << "Processing offline payment with MasterCard." << endl;
    }

    void swipeCard() override
    {
        cout << "Swiping MasterCard." << endl;
    }
};