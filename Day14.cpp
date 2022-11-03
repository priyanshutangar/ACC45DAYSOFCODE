//book pack
#include <iostream>
using namespace std;
int main() 
{
    int a;
    cin>>a;    
    for(int i=0; i<a; i++)
    {
        int x,y,z,c,d,ans;
        int count=0;
        cin>>x>>y>>z;
        if(y<=z)
        {
            cout<<x<<endl;
        }
        else
        {
            count=2;
            c=y-z;
            while(c>z)
            {
                c=c-z;
                count++;
            }
            ans=count*x;
            cout<<ans<<endl;
        }
    }
    return 0;
}
