//burger
#include <iostream>
using namespace std;

int main() {
	int a;
	cin>>a;
	for(int i=0;i<a;i++)
	{
	    int a,b;
	    cin>>a>>b;
	    if(a<b)
	    {
	        cout<<a<<endl;
	    }
	    else if(a>b)
	    {
	        cout<<b<<endl;
	    }
	    else
	    {
	        cout<<a<<endl;
	    }
	}
	return 0;
}
