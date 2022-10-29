#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int x[3]={-1,2};
    for(int i=0; i < 2; i++)
    {
        int ex = x[i];
        try
        {
            if (ex>0)
            //throwing numeric value as exception
            throw ex;
            else// throwing a character as exception
            throw 'e';
        }
        catch (int ex) // to catch numeric exceptions
        {
            cout<<"interger exception";
        }
        catch(char ex) // to catch character string exceptions
        {
            cout<<"Charactere exception\n";
        }
    }
}
