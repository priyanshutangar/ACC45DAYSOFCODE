//Tasty Decision
#include <iostream>
using namespace std;
int main() {
    int a;
    cin>>a;    for(int i=0; i<a; i++)
    {
        int x,y,c,d;
        cin>>x>>y;
        c=x*2;
        d=y*5;
        if(c>d)
        {
            cout<<"Chocolate"<<endl;
        }
        else if(d>c)
        {
            cout<<"Candy"<<endl;
        }
        else
        {
            cout<<"Either"<<endl;
        }
    }
    return 0;
}
