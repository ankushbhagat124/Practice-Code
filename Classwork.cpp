// #include <iostream>
// using namespace std;
// class salarysum;
// class salary
// {
//     float basic, da, hra, medical;
//     public:
//     salary()
//     {
//         basic = 0;
//         da = 0;
//         hra = 0;
//         medical = 0;
//     }
//     void input()
//     {
//         cout << "Enter Basic: ";
//         cin >> basic;
//         cout << "Enter DA: ";
//         cin >> da;
//         cout << "Enter HRA: ";
//         cin >> hra;
//         cout << "Enter Medical: ";
//         cin >> medical;
//     }
//     friend class salarysum;
// };
// class salarysum
// {
//     float total, breakupsal;
//     public:
//     salarysum()
//     {
//         total =0;
//         breakupsal = 0;
//     }
//     salarysum(salary sobj)
//     {
//         breakupsal = (sobj.basic+sobj.da+sobj.hra+sobj.medical);
//     }
//     void input2()
//     {
//         cout << "Enter Total: ";
//         cin >> total;
//     }
//     void print()
//     {
//         cout << "Break Salary: " << total-breakupsal;
//     }
// };
// int main ()
// {
//     salary sobj;
//     sobj.input();
//     salarysum obj;
//     obj.input2();
//     obj = sobj;
//     obj.print();
// }
#include <iostream>
#include <string.h>
using namespace std;
class salary
{
    string name;
    float basic;
    float da;
    float hra;
    float med;
    float sum;

public:
    salary(string empname, float base, float tda, float thra, float tmed)
    {
        name = empname;
        basic = base;
        da = tda;
        hra = thra;
        med = tmed;
        sum = basic + da + hra + med;
    }
    float getBasic()
    {
        return basic;
    }
    float getSalary()
    {
        return sum;
    }
    float getDa()
    {
        return da;
    }
    float getMedical()
    {
        return med;
    }
    float getHra()
    {
        return hra;
    }
};
class salarysum
{
    float sum;

public:
    void display()
    {
        cout << "Total Salary : " << sum << endl;
        ;
    }
    void operator=(salary sal)
    {
        cout << "\nCompleted Using Operator Overloading" << endl;
        sum = sal.getSalary();
    }
};
int main()
{
    salary sal("Rakesh Singh", 25000.0, 16000, 750.5, 2500.5);
    salarysum salsum;
    salsum = sal;
    salsum.display();
    return 0;
}