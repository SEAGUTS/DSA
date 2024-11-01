//Input the angles of a triangle and check whether the triangle is valid or not
#include <iostream>
using namespace std;
int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    if ((x+y+z)==180)
    {
        cout<<"yes it is a traingle!";
    }
    else
    {
        cout<<"it is not a traingle!";
    }
    return 0;
}
