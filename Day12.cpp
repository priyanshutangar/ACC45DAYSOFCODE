//Broken Phone
#include <iostream>
using namespace std;

int main() {
    int a;
    cin>>a;
    for(int i=0;i<a;i++)
    {
        int X,Y;
        cin>>X;
        cin>>Y;
        if(X<Y)
        {
            cout<<"REPAIR"<<endl;
        }
        else if(X>Y)
        {
            cout<<"NEW PHONE"<<endl;
        }
        else
        {
            cout<<"ANY"<<endl;
        }
    }
	// your code goes here
	return 0;
}
