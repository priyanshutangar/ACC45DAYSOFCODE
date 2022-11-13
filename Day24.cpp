// speed limit test
#include <iostream>
using namespace std;

int main() {
	int a;
	cin>>a;
	for(int i=0;i<a;i++)
	{
	    float x,a,b,y;
	    cin>>a>>x>>b>>y;
	    if(a/x > b/y)
	    {
	        cout<<"Alice"<<endl;
	    }
	    else if(a/x<b/y)
	    {
	        cout<<"Bob"<<endl;
	    }
	    else
	    {
	        cout<<"Equal"<<endl;
	    }
	}
	return 0;
}
