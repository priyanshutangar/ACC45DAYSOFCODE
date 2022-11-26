//hackerman
#include <iostream>
using namespace std;

int main() {
	int a;
	cin>>a;
	for(int i=0;i<a;i++)
	{
	    int a,b;
	    cin>>a>>b;
	    int c=a+b;
	    bool is_prime=true;
	    for(int i=2; i<c; i++)
	    {
	        if(c%i==0)
	        {
	            is_prime=false;
	            break;
	        }
	    }
	    if(is_prime)
	    {
	        cout<<"Alice"<<endl;
	    }
	    else
	    {
	        cout<<"Bob"<<endl;
	    }
	}
	return 0;
}
