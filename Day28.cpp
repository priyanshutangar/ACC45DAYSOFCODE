//tv discount
#include <iostream>
using namespace std;

int main() {
	int a;
	cin>>a;
	for(int i=0;i<a;i++)
	{
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    if(a-c<b-d)
	    {
	        cout<<"FIRST"<<endl;
	    }
	    else if(a-c>b-d)
	    {
	        cout<<"SECOND"<<endl;
	    }
	    else
	    {
	        cout<<"ANY"<<endl;
	    }
	}
	return 0;
}
