//Practice_makes_us_perfect
#include<iostream>
using namespace std;
int main()
{
    int p1,p2,p3,p4;
    int a=0;
    cin>>p1>>p2>>p3>>p4;
    if(p1>=10)
    {
        a++;
    }
    if(p2>=10)
    {
        a++;
    }
    if(p3>=10)
    {
        a++;
    }
    if(p4>=10)
    {
        a++;
    }
    cout<<a;
    return 0;
}
