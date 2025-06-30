#include <iostream>
using namespace std;

int main() {
    int arr_reverse[5] = {1, 2, 3, 4, 5};
    int left = 0;
    int right = sizeof(arr_reverse) / sizeof(arr_reverse[0]) - 1;

    while (left < right) {
        int temp = arr_reverse[left];
        arr_reverse[left] = arr_reverse[right];
        arr_reverse[right] = temp;
        left++;
        right--;
    }

    cout << "Reverse: ";
    for (int i = 0; i < 5; i++) {
        cout << arr_reverse[i] << " ";
    }
    cout << endl;

    return 0;
}

