//Finding number four
#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    for(int i=0; i<a; i++)
    {
        int number, rem=0, b=0;
        cin>>number;
        while(number >= 1)
        {
            rem=number%10;
            if(rem==4)
            {
                b++;
            }
            number=number/10;
        }
        cout<<b<<endl;
    }
    return 0;
}
