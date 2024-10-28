#include <iostream>
using namespace std;
// void swap(int *x,int *y)
// {
//     int temp = *x;
//     *x = *y;
//     *y = temp;
// }
void input(int a[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
}
void insert(int a[],int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = a[i];
        int j = i - 1;
        while (j>=0 && a[j]>key)
        {
            a[j+1] = a[j];
            j = j-1;
        }
        a[j+1] = key;
    }
    
}
void print(int a[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
}
int main() {
    int n;
    cin>>n;
    int a[n];
    input(a,n);
    insert(a,n);
    print(a,n);
    return 0;
}
