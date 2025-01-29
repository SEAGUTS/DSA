#include <iostream>
using namespace std;
int min(int x, int y) {
    return (x <= y) ? x : y;
}
void fibos(int a[],int key,int n)
{
    int fibo2 = 0;
    int fibo1 = fibo2 + 1;
    int fibo = fibo1 + fibo2;
    int c = 0;
    while (fibo<n)
    {
        fibo2 = fibo1;
        fibo1 = fibo;
        fibo = fibo1 + fibo2;
    }
    int offset = -1;
    while (fibo>1)
    {
        int i = min(offset + fibo2,n);
        cout<<i;
        if (a[i]<key)
        {
            fibo = fibo1;
            fibo1 = fibo2;
            fibo2 = fibo - fibo1;
            offset = i;
        }
        else if (a[i]>key)
        {
            fibo = fibo2;
            fibo1 = fibo1 - fibo2;
            fibo2 = fibo - fibo1;
        }
        else
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
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(a)/sizeof(a[0]);
    fibos(a,6,n);
    return 0;
}