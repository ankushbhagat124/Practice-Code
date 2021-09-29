#include <iostream>
using namespace std;
void area(int a)
{
    cout << "Area of Square with Int data type: " << a*a;
}
void area(float a)
{
    cout << "Area of Square with float data type: " << a*a;
}
void area(double a)
{
    cout << "Area of Square with double data type: " << a*a;
}
void area(int a, int b)
{
    cout << "Area of Rectangle with Int data type: " << a*b;
}
void area(double a, double b)
{
    cout << "Area of Rectangle with double data type: " << a*b;
}
void area(float a, float b)
{
    cout << "Area of Rectangle with float data type: " << a*b;
}
void area(long a)
{
    cout << "Area of Circle with long data type: " << 3.14*a*a;
}
void area(short a)
{
    cout << "Area of Circle with short data type: " << 3.14*a*a;
}
void area(short a, short b)
{
    cout << "Area of Triangle with short data type: " << 0.5*a*b;
}
void area(long a, long b)
{
    cout << "Area of Triangle with short data type: " << 0.5*a*b;
}
int main()
{
    double a, b;
    cin >> a >> b;
    area(a,b);
    cout << "\n";
    area((float)a, (float)b);
    cout << "\n";
    area((long)a, (long)b);
    cout << "\n";
    area((float)12, (float)3);
    cout << "\n";
    area((long)a, (long)b);
    cout << "\n";
    area((short)a, (short)b);
    cout << "\n";
    area((int)12, (int)3);
    cout << "\n";
    area((int)a);
    cout << "\n";
    area(12);
}
