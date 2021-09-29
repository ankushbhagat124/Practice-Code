#include<iostream>
using namespace std;

class employee
{
    public:
        float base;
        float pf;
        float houseAll;

        employee()
        {   
        }
};

class staff: public employee
{
    public:
        float travel;

        staff()
        {
            cout<<"Staff class !!"<<"\n";
        }

        float sum()
        {
            cout<<"Enter your input: "<<"\n";
            cout<<"\nBase : ";
            cin>>base;
            cout<<"PF : ";
            cin>>pf;
            cout<<"House Allowance : ";
            cin>>houseAll;
            cout<<"Travel : ";
            cin>>travel;

            return (base+pf+houseAll+travel);
        }

};

class faculty : public employee
{
    public:
        float med;

        faculty()
        {
            cout<<"\nFaculty class !! "<<"\n";
        }
        float sum()
        {
            cout<<"Enter your values: ";
            cout<<"\nBase: ";
            cin>>base;
            cout<<"PF : ";
            cin>>pf;
            cout<<"House Allowance : ";
            cin>>houseAll;
            cout<<"Medical Allowance : ";
            cin>>med;

            return (base+pf+houseAll+med);
        }
};

int main()
{
    staff s1;
    float ans1=s1.sum();
    cout<<"\nSum of salary of staff : "<<ans1 << "\n";
    
    faculty f1;
    float ans2=f1.sum();
    cout<<"\nSum of salary of faculty : "<<ans2 << "\n";
    return 0;
}