//who is taller
#include <iostream>
using namespace std;

int main() {
    int a;
    cin>>a;
    for(int i;i<a;i++)
    {
        int x,y;
        cin>>x>>y;
        if(x>y)
        {
            cout<<"A"<<endl;
        }
        else
        {
            cout<<"B"<<endl;
        }
    }
    return 0;
}
