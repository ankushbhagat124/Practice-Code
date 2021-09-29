#include <iostream>
using namespace std;

class Complex
{
    private:
    int a1,a2;
    int b1,b2;
    public:
    void set(int x1, int x2, int y1, int y2)
    {
        a1 = x1;
        a2 = x2;
        b1 = y1;
        b2 = y2;
    }
    friend void Sum(Complex);
};
void Sum(Complex c)
{
    int ans1 = c.a1 + c.b1;
    int ans2 = c.a2 + c.b2;
    cout << "First Complex no:  " << c.a1 << " + i" << c.a2 << "\n";
    cout << "Second Complex no: " << c.b1 << " + i" << c.b2 << "\n";
    cout << "Sum: " << ans1 << " + i" << ans2;
}

int main ()
{
    int x1, y1, x2, y2;
    Complex c;
    cout << "Enter real part of 1st complex number: ";
    cin >> x1;
    cout << "Enter imaginary part of 1st complex number: ";
    cin >> x2;
    cout << "Enter real part of 2nd complex number: ";
    cin >> y1;
    cout << "Enter imginary part of 2nd complex number: ";
    cin >> y2;
    c.set(x1,x2,y1,y2);
    Sum(c);
}