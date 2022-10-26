//make all equal using pairs
#include <iostream>
using namespace std;

int main()
{
    int a, A[100];
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        int N;
        cin >> N;
        while (N > 0)
        {
            cin >> A[N];
            N--;
        }
        while (N < 3)
        {
            cout << A[N];
            N++;
        }
    }

    return 0;
}

