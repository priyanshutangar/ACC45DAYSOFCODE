//counting problem
#include <iostream>
using namespace std;

int main() {
	int a;
	cin>>a;
	for(int i;i<a;i++)
	{
	    int arr[100000],n;
	    int count=0;
	    cin>>n;
	    for(int j=0;j<n;j++)
	    {
	        cin>>arr[j];
	        if(arr[j]%2!=0)
	        {
	            count++;
	        }
	    }
	    if(count%2==0)
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
