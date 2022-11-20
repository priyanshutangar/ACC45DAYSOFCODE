//finding shoes
#include <iostream>
using namespace std;

int main() {
	int a;
	cin>>a;
	for(int i=0;i<a;i++)
	{
	    int n,m;
	    cin>>n>>m;
	    if(m>n)
	    {
	        cout<<n<<endl;
	    }
	    else if(n>m)
	    {
	        int x=2*n-m;
	        cout<<x<<endl;
	    }
	    else
	    {
	        cout<<n<<endl;
	    }
	}
	return 0;
}
