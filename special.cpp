//Input any character and check whether it is the alphabet, digit or special character
#include <iostream>
using namespace std;
void special(char a)
{
    if (a>='A'&&a<='z')
    {
        cout<<"it is a alphabet!";
    }
    else if (a>='1'&&a<='9')
    {
        cout<<"it is a digit!";
    }
    else
    {
        cout<<"it is a special character!";
    }
    
}
int main()
{
    char a;
    cin>>a;
    special(a);
    return 0;
}
