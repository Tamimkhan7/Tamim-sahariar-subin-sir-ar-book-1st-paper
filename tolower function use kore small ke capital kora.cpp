#include <bits/stdc++.h>
using namespace std;
int main()
{
    char ch;
    char str[] = "AMAR SONAR BANGLA";
    int len = sizeof(str);
    for(int i=0; i<len; i++)
    {
        ch = tolower(str[i]);
        cout<<ch<<" ";
    }
    cout<<endl;
}
