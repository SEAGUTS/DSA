//Input any alphabet and check whether it is a vowel or consonant
#include <iostream>
using namespace std;
void checkvowel(char a)
{
    if (a=='A'||a=='E'||a=='O'||a=='U'||a=='I'||a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
    {
        cout<<"it is a vowel!";
    }
    else
    {
        cout<<"it is a consonant!";
    }
    
}
int main()
{
    char a;
    cin>>a;
    checkvowel(a);
    return 0;
}
