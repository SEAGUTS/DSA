//Find the maximum between two numbers.
#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    if (a>b)
    {
        cout<<"first number is max!";
    }
    else if (a==b)
    {
        cout<<"both number are same!";
    }
    else
    {
        cout<<"Second number is max!";
    }
    return 0;
}