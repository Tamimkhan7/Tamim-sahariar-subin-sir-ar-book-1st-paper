#include <bits/stdc++.h>
using namespace std;
int main()
{
    char arr;
    cin>>arr;
    int len = sizeof(arr);
    cout<<len<<endl;
    if(arr >='A' && 'Z' <= arr)
    {
        char arr1 = (arr+32);
        cout<<arr1<<endl;
    }
    else
    {
        char arr2 = 'A'+(arr -'a');
        cout<<arr2<<endl;
    }
}
