//Check whether a number is negative, positive or zero
#include <iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    if (a<0)
    {
        cout<<"the number is negative!";
    }
    else if (a==0)
    {
        cout<<"the number is zero!";
    }
    else
    {
        cout<<"the number is postive";
    }
    return 0;
}