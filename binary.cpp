#include <iostream>
using namespace std;
void binary(int a[],int n,int key,int l,int h)
{
    int c = 0;
    while (l<h)
    {
        int mid = (l+h)/2;
        if (a[mid]>key)
        {
            l = mid + 1;
        }
        else if (a[mid]<key)
        {
            h = mid - 1;
        }
        else
        {
            cout<<"element found at "<<mid+1<<" position!";
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
    binary(a,n,key,0,n);
    return 0;
}