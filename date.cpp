//The Date Is Correct or Not
#include <iostream>
using namespace std;
int main()
{
    int date,month,year;
    cin>>date>>month>>year;
    if (date<=1||date>=31)
    {
        cout<<"DATE is not correct!";
    }
    else if (month<=1||month>=12)
    {
        cout<<"MONTH is not correct!";
    }
    else
    {
        cout<<"Your date is correct!: "<<date<<" "<<month<<" "<<year;
    }
    return 0;
}