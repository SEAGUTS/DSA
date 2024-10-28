#include <iostream>
using namespace std;
void swap(int *x,int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
void input(int a[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
}
void select(int a[],int n)
{
    int min;
    for (int i = 0; i < n - 1; i++)
    {
        min = i;
        for (int j = i+1; j < n; j++)
        {
            if (a[j]<a[min])
            {
                min = j;
            }
            // swap(&a[min],&a[i]);
        }
        swap(&a[min],&a[i]);
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
    select(a,n);
    print(a,n);
    return 0;
}