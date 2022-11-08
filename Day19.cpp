//get subscription
#include <iostream>
using namespace std;
int main() 
{
    int a;
    cin>>a;
    for(int i=0;i<a;i++)
    {
        int x;
        cin>>x;
        if(x<=30)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
