#include <iostream>
#include <string>
#include "Employee.cc" // Assuming Employee class is defined in this header

using namespace std;

class EmployeePerformanceReportGenerator
{
public:
    void generateReport(Employee e)
    {
        cout << "Generating employee performance report." << endl;
    }
};