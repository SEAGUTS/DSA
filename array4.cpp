#include <iostream>
using namespace std;
void print(int a[],int n,int i)
{
    if (i==n)
    {
        cout<<endl;
        return;
    }
    cout<<a[i]<<" ";
    print(a,n,++i);
}
void take(int a[],int n,int i)
{
    if (i==n)
    {
        cout<<endl;
        return;
    }
    cin>>a[i];
    take(a,n,++i);
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    take(a,n,0);
    print(a,n,0);
    return 0;
}