#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cout<<"before insertion:\n";
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    int key,n1;
    cin>>n1;
    cin>>key;
    if(n>=n1)
    {
        n=n;
    }
    else
    {
        a[n1]=key;
        n=n+1;
    }
    cout<<"after insertion:\n";
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
    
    
    return 0;
}