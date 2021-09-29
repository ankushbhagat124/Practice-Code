#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin >> n;
    int maxi = 0;
    string s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
        if (s[i].length() >= maxi)
            maxi = s[i].length();
    }
    char ch[n][maxi];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < maxi; j++)
        {
            char character;
            if (j >= s[i].length())
                character = ' ';
            else
                character = s[i][j];

            ch[i][j] = character;
        }
    }
    cout << "\n" << "Rigth Alignment:" << "\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < maxi; j++)
        {
            cout << ch[i][j];
        }
        cout << "\n";
    }
    cout << "\n";
    char ch2[n][maxi];
    for (int i = 0; i < n; i++)
    {
        int j;
        for (j = 0; j < maxi-s[i].length(); j++)
        {
            ch2[i][j] = ' ';
        }
        int m = 0;
        for (int k = j; k < s[i].length()+j; k++)
        {
            ch2[i][k] = ch[i][m];
            m++;
        }
    }
    cout << "Left Alignment:" << "\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < maxi; j++)
        {
            cout << ch2[i][j];
        }
        cout << "\n";
    }
    cout << "\n";
    cout << "Top Alignment:" << "\n";
    char ch3[maxi][n];
    for (int j = 0; j < maxi; j++)
    {
        for (int i = 0; i < n; i++)
        {
            cout << ch[i][j] << " ";
            ch3[j][i] = ch[i][j];
        }
        cout << "\n";
    }
    cout << "\n";
    cout << "Bottom Alignment:" << "\n";
    char ch4[maxi][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < maxi; j++)
        {
            ch4[maxi-j-1][i] = ch3[j][i];
        }
    }
    for (int i = 0; i < maxi; i++)
    {
        for (int j = 0; j < n; j++)
            cout << ch4[i][j] << " ";
        cout << "\n";
    }
    
}
/*#include<bits/stdc++.h>
using namespace std;
void init_code()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE
}
int maximum(int a,int b,int c,int d,int e)
{
    int x=max(a,b);
    int y=max(c,d);
    int z=max(x,y);
    int p=max(z,e);
    return p;
}
int main()
{
    string a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    
    //left alignment
    cout<<a<<"\n"<<b<<"\n"<<c<<"\n"<<d<<"\n"<<e;
    
    cout<<"\n\n";

    //top alignment
    int length=maximum(a.length(),b.length(),c.length(),d.length(),e.length());
    for(int i=0;i<length;i++)
    {
        if(i<a.length())
            cout<<a[i]<<" ";
        else
            cout<<"  ";
        if(i<b.length())
            cout<<b[i]<<" ";
        else
            cout<<"  ";
        if(i<c.length())
            cout<<c[i]<<" ";
        else
            cout<<"  ";
        if(i<d.length())
            cout<<d[i]<<" ";
        else
            cout<<"  ";
        if(i<e.length())
            cout<<e[i]<<" ";
        else
            cout<<"  ";
        cout<<"\n";
    }
    cout<<"\n";

    //bottom alignment
    for(int i=length-1;i>=0;i--)
    {
        if(i<a.length())
            cout<<a[a.length()-i-1]<<" ";
        else
            cout<<"  ";
        
        if(i<b.length())
            cout<<b[b.length()-i-1]<<" ";
        else
            cout<<"  ";
        
        if(i<c.length())
            cout<<c[c.length()-i-1]<<" ";
        else
            cout<<"  ";
        
        if(i<d.length())
            cout<<d[d.length()-i-1]<<" ";
        else
            cout<<"  ";
        
        if(i<e.length())
            cout<<e[e.length()-i-1]<<" ";
        else
            cout<<"  ";
       
        cout<<"\n";
    }
    cout<<"\n";
    
    //right alignment
    cout.width(length);
    cout<<a<<"\n";
    cout.width(length);
    cout<<b<<"\n";
    cout.width(length);
    cout<<c<<"\n";
    cout.width(length);
    cout<<d<<"\n";
    cout.width(length);
    cout<<e<<"\n";
    return 0;
}*/