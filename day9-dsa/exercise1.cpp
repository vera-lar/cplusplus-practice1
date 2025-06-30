#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1 , 2, 3, 4, 5, 6, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
    int left = 0;
    int right = sizeof(arr) / sizeof(arr[0]) - 1;
    int target = 20;

    while (left < right)
    {
        int sum = arr[left] + arr[right];
        if (sum == target)
        {
            cout << "found: " << arr[left] << " + " << arr[right] << " =  " << target << endl;
            break;
        }
        else if (sum < target)
        {
            left++;
        }
        else
        {
            right--;
        }
    }

    return 0;
}
