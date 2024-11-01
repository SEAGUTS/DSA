//Check whether a character is an uppercase or lowercase alphabet
#include <iostream>
using namespace std;
int main()
{
    char a;
    cin>>a;
    if (a>='A'&&a<='Z')
    {
        cout<<"it is a uppercase!";
    }
    else
    {
        cout<<"it is a lowercase!";
    }
    return 0;
}
