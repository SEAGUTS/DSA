//Check whether a character is an alphabet or not
#include <iostream>
using namespace std;
void checkchar(char a)
{
    if ((a>='A' && a<='Z') || (a>='a' && a<='z'))
    {
        cout<<"it is a character!";
    }
    else
    {
        cout<<"it is not a character!";
    }
    
}
int main()
{
    char a;
    cin>>a;
    checkchar(a);
    return 0;
}