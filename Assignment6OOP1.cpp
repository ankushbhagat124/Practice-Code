#include <iostream>
using namespace std;
class Search
{
    private:
    int n;
    int arr[100];
    public:
    void input()
    {
        cout << "Enter size of the array: ";
        cin >> n;
        cout << "Enter your array: ";
        for (int i = 0; i < n; i++)
        cin >> arr[i];
    }
    void search(int x)
    {
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == x)
            {
                cout << "Number present at position: " << i+1;
                flag = true;
                break;
            }
        }
        if (flag == false)
        cout << "Number is absent!";
    }
};
int main ()
{
    Search s;
    s.input();
    int x;
    cout << "Enter no to be searched: ";
    cin >> x;
    s.search(x);
}