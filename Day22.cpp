//first last occurance
#include <iostream>
#include <vector>
using namespace std;

int firstocc(int arr[], int size, int no)
{
    int start = 0, first = -1;
    int end = size - 1;
    int mid = start + ((end - start) / 2);
    while (start < end)
    {
        if (arr[mid] == no)
        {
            first = mid;
            end = mid - 1;
        }
        if (arr[mid] > no)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + ((end - start) / 2);
    }
    return first;
}
int lastocc(int arr[], int size, int no)
{
    int start = 0, last = -1;
    int end = size - 1;
    int mid = start + ((end - start) / 2);
    while (start < end)
    {
        if (arr[mid] == no)
        {
            last = mid;
            start = mid + 1;
        }
        if (arr[mid] > no)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + ((end - start) / 2);
    }
    return last;
}
int main()
{
    int arr[6] = {5, 7, 7, 8, 8, 10};
    int target = 8;
    int a, b;
    a = firstocc(arr, 6, target);
    b = lastocc(arr, 6, target);
    cout << a << "and" << b;
}
