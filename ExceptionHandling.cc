#include <iostream>
#include <exception>

using namespace std;

// deprecated usage
//  void test() throw(int,char,runtime_error){
//      throw 10;
//  }

int main()
{
    int a = 10, b = 0;
    try
    {
        if (b == 0)
            throw runtime_error("Divide by zero error!");
        int c = a / b;
        cout << c << endl;
    }
    catch (runtime_error &e)
    {
        cout << "Error Occurred!" << endl;
        cout << e.what() << endl;
    }

    cout << "-----multiple catch blocks-----" << endl;

    try
    {
        throw 2.2; // unknown
        throw "some exception";
        throw 404;
        throw runtime_error("Divide by zero error!");
    }
    catch (const char *err)
    {
        cout << err << endl;
    }
    catch (int *err)
    {
        cout << err << endl;
    }
    catch (runtime_error &e)
    {
        cout << "Error Occurred!" << endl;
        cout << e.what() << endl;
    }
    catch (...)
    {
        cout << "Unknown Error Occurred!" << endl;
    }

    cout << "-----nested blocks-----" << endl;

    try
    {
        try
        {
            throw runtime_error("run time exception!!");
        }
        catch (runtime_error &e)
        {
            cout << "Error Occurred!" << endl;
            cout << e.what() << endl;
            throw; // to throw the outer exception
        }
    }
    catch (...)
    {
        cout << "Unknown Error Occurred!" << endl;
    }
    return 0;
}