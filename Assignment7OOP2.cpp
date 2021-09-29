#include <iostream>
using namespace std;
class  EMPLOYEE
{
    public:
        float base;
        float pf;
        float houseAll;
    
    public:
    EMPLOYEE()
    {
        base = 0;
        pf = 0;
        houseAll = 0;
    }
    void getdata()
    {
        cout << "Enter details: ";
        cout<<"\nBase : ";
        cin>>base;
        cout<<"PF : ";
        cin>>pf;
        cout<<"House Allowance : ";
        cin>>houseAll;
    }
};
class SALARY: public EMPLOYEE
{
    public:
    void sum()
    {
        cout << "Total Salary is: " << base+pf+houseAll;
    }
};
int main ()
{
    SALARY s;
    s.getdata();
    s.sum();
}
