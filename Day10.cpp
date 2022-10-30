//the cheaper cab
#include<iostream>
using namespace std;
int main()
{
    int X,Y;
    cin>>X>>Y;
    if(X<Y)
    {
        cout<<"CAB X";
    }
    else if(X>Y)
    {
        cout<<"CAB Y";
    }
    else
    {
        cout<<"ANY";
    }
    return 0;
}
