#include <iostream>
#include "Employee.cc" // Assuming Employee class is defined in this header

using namespace std;

class EmployeeSalaryCalculator
{
public:
    double calculateSalary(Employee e)
    {
        cout << "Calculating full-time employee salary." << endl;
        return 5000.0; // Example fixed salary
    }
};
