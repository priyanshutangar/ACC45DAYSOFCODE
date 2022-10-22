//Counting pretty numbers
#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    for(int i=0;i<a;i++)
    {
        int arr[2];
        int count=0;
        for(int k=0; k<2; k++)
        {
            cin>>arr[k];    
        }
        for(int j=arr[0]; j<=arr[1]; j++)
        {
            if(j%10 == 2 || j%10 == 3 || j%10 == 9)
            {
                count++;
            }
        }
        cout<<count;
    }
    return 0;
}
