#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x = 10;
    int *p;
    cout<<x<<endl;
    p = &x;
    cout<<p<<endl;
    *p = 20;
    cout<<x<<endl;
x = 15;
cout<<x<<endl;
cout<<*p<<endl;
cout<<&x<<endl;
cout<<p<<endl;
}