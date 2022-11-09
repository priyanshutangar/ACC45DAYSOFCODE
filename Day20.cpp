//mario and the broken string
#include <iostream>
using namespace std;

int main() {
    int a;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        int n;
        cin>>n;
        if(n%2==0)
        {
            char s[n];
            int count = 0;
            for(int j=0; j<n; j++)
            {
                cin>>s[j];
            }
            for(int i=0; i<n/2; i++)
            {
                if(s[i]==s[i+(n/2)])
                {
                    count++;
                }
                else
                {
                    count--;
                }
            }
            if(count==n/2)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else
        {
            cout<<"enter even number";
        }
    }
    return 0;
}
