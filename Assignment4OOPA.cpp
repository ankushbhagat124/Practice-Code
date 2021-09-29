#include <iostream>
using namespace std;
class Employee
{
    static int salary;
    static int netSalary;

public:
    void setSalary(int i)
    {
        cout << "Enter the salary of " << i + 1 << " employee(in Rs): ";
        cin >> salary;
    }
    void totalSalary()
    {
        netSalary = netSalary + salary;
    }
    static void shownetSalary()
    {
        cout << "Net Salary :- Rs " << netSalary << endl;
    }
};
int Employee ::netSalary;
int Employee ::salary;
int main()
{
    Employee sal[10];
    for (int i = 0; i < 10; i++)
    {
        sal[i].setSalary(i);
        sal[i].totalSalary();
    }
    Employee ::shownetSalary();
    return 0;
}