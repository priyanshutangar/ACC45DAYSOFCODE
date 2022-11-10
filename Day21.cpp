//mario and bullet
#include <iostream>
using namespace std;

int main() {
	int a;
	cin>>a;
	for(int i=0; i<a; i++)
	{
	    int x,y,z;
	    cin>>x>>y>>z;
	    int b=y/x;
	    if(b<z)
	    {
	        cout<<z-b<<endl;
	    }
	    else
	    {
	        cout<<"0"<<endl;
	    }
	}
	return 0;
}
