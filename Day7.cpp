//Binary Search
#include <iostream>
using namespace std;
int binarysearch(int arr[4], int no, int n)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == no)
        {
            return mid;
        }
        if (no > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return mid;
}
int main()
{
    int arr1[5] = {1, 3, 5, 7, 12};
    cout << binarysearch(arr1, 12, 5) << endl;
    return 0;
}
// time complexcity is O(log(n))
