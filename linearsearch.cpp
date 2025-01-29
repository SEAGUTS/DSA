#include <iostream>
using namespace std;
void linear(int a[],int n,int key)
{
    int c=0;
    for (int i = 0; i < n; i++)
    {
        if (a[i]==key)
        {
            cout<<"element found at "<<i+1<<" position!";
            c++;
            break;
        }
    }
    if (c==0)
    {
        cout<<"Element not found!";
    }
    
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int key;
    cin>>key;
    linear(a,n,key);
    return 0;
}