//Playing with Matches
#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        int arr[10]={6,2,5,5,4,5,6,3,7,6};
        int a, b, total=0, rem=0, matches=0;
        cin>>a>>b;//8  6
        total =a+b;//14
        while(total >=0)
        {
            rem=total%10;//14%10==4   1
            matches=arr[rem]+matches;//4 ,,,,, 2+4
            total=total/10;//1 ,,,
        }
        cout<<matches<<endl;
    }
}
