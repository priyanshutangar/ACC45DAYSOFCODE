//Volume Control
#include <iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        int X,Y;
        cin>>X>>Y;
        if(X>Y)
        {
            cout<<X-Y<<endl;
        }
        else if(X<Y)
        {
            cout<<Y-X<<endl;
        }
        else
        {
            cout<<"0"<<endl;
        }
    }
    return 0;
}
