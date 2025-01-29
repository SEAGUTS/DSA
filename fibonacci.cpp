#include <iostream>
using namespace std;
void fibo(int n)
{
    int fib1 = 0;
    int fib2 = fib1 + 1;
    int fib3 = fib1 + fib2;
    int c = 3;
    cout<<fib1<<" "<<fib2<<" ";
    while (c<=n)
    {
        cout<<fib3<<" ";
        fib1 = fib2;
        fib2 = fib3;
        fib3 = fib1 + fib2;
        c++;
        
    }
    
}
int main()
{
    int n = 15;
    fibo(n);
    return 0;
}