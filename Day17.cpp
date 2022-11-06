//test score
#include <iostream>
using namespace std;

int main() {
	int a;
	cin>>a;
	for(int i=0; i<a; i++)
	{
	    int n,x,y;
	    cin>>n>>x>>y;
	    if(y==0)
	    {
	        cout<<"YES"<<endl;
	    }
	    else if(y%x==0)
	    {
	        cout<<"YES"<<endl;
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
