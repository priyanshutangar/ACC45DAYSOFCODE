//second max of three numbers
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int N,a,b,c;
	cin>>N;
	int i;
	for(i=0;i<N;i++)
	{
	    cin>>a>>b>>c;
	    if((a>b&&a<c)||(a>c&&a<b))
	    cout<<a<<endl;
	    else if((b>a&&b<c)||(b>c&&b<a))
	    cout<<b<<endl;
	    else 
	    cout<<c<<endl;
	    
	    
	}
	return 0;
	
	
}
