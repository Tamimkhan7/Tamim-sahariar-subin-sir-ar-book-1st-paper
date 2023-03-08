#include <bits/stdc++.h>
using namespace std;
int main()
{
    char str[] = "amar sonar bangla";
    char ch;
    int len = sizeof(str);
    for(int i=0; i<len; i++)
    {
        ch = toupper(str[i]);
        cout<<ch;
    }
    cout<<endl;

}
