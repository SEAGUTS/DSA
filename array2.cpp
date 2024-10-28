#include <iostream>
using namespace std;
int main()
{
   int n,t=0;
   cin>>n;
   string a[n];
   for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n/2; i++)
    {
        if (a[i]!=a[n-i-1])
        {
            cout<<"not a palindrome!"<<endl;
            t++;
            break;
        }
    }
    if (t==0)
    {
        cout<<"it is a palindrome!";
    }
    
return 0;
}
