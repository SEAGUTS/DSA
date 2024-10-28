#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
        a[i]="*";
    }
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
return 0;
}