#include <iostream>
using namespace std;
int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int x = 60;
    int low = 0;
    int high = 6;
    while (low <= high)
    {

        int mid = (low + high) / 2;

        if (x == arr[mid])
        {
            return mid;
        }
        else if (x < arr[mid])
        {
            high = mid + 1;
        }
        else if (x > arr[mid])
        {
            low = mid + 1;
        }
    }
}