#include <iostream>
using namespace std;

class Bank
{
    private:
    int principle;
    float rate;
    int time;
    public:
    Bank()
    {
        principle = 5000;
        rate = 5.0;
        time = 18;
    } 
    Bank(int a, float r, int t)
    {
        a = principle;
        r = rate;
        t = time;
    }
    void getSI()
    {
        float ans = (principle*rate*time)/100;
        cout << "Principle(Rs):       " << principle << "\n";
        cout << "Rate of Interest(%): " << rate << "\n";
        cout << "Time(months):        " << time << "\n";
        cout << "Simple Interest(Rs): " << ans << "\n";
    }
};
int main()
{
    Bank B;
    B.getSI();
}