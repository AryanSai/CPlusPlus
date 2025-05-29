#include <iostream>

using namespace std;

class WrongImplementaionOfATM
{
public:
    void withdrawCash()
    {
        cout << "cash withdrawn!" << endl;
    }
    void checkBalance()
    {
        cout << "your balance is: " << endl;
    }
    void printReceipt()
    {
        cout << "receipt printed!" << endl;
    }
};

class CashDispenser
{
public:
    void withdrawCash()
    {
        cout << "cash withdrawn!" << endl;
    }
};

class BalanceChecker
{
public:
    void checkBalance()
    {
        cout << "your balance is: " << endl;
    }
};

class ReceiptPrinter
{
public:
    void printReceipt()
    {
        cout << "receipt printed!" << endl;
    }
};

class ATM
{
    CashDispenser cashDispenser;
    BalanceChecker balanceChecker;
    ReceiptPrinter receiptPrinter;

public:
    ATM()
    {
    }

    void withdraw()
    {
        cashDispenser.withdrawCash();
        receiptPrinter.printReceipt();
    }

    void balanceEnquiry()
    {
        balanceChecker.checkBalance();
        receiptPrinter.printReceipt();
    }
};