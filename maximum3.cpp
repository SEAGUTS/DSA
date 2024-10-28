//Find the maximum between the three numbers.
#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if (a>b && a>c)
    {
        cout<<"First number is max!";
    }
    else if (b>a && b>c)
    {
        cout<<"Second number is max!";
    }
    else
    {
        cout<<"Third number is max!";
    }
    
    return 0;
}