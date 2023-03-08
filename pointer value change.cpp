#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x =10;
    int *p;
    p = &x;
    cout<<x<<endl;
    *p = 20;//line confused 
    cout<<x<<endl;//totally confused in the line, i have no idea in this line
    cout<<&x<<endl;
    cout<<p<<endl;
}