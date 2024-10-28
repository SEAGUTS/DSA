//Voting Eligibility Checker
#include <iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter your age:";
    cin>>age;
    if (age>=18)
    {
        cout<<"congratulation! You are eligibile for vote.";
    }
    else
    {
        cout<<"sorry! You are not eligibile for vote.";
    }
    return 0;
}