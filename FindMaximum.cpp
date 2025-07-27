//  1. Find Maximum Element in Array

#include <iostream>
using namespace std;

int findMax(int arr[], int size) {
    int maxNumber = arr[0]; // ✅ start from index 0
    for (int i = 1; i < size; i++) {
        if (arr[i] > maxNumber) {
            maxNumber = arr[i];
        }
    }
    return maxNumber;
}
 
int main() {
    int arr[] = {5, 2, 8, 1, 9, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Maximum Element: " << findMax(arr, size) << endl;
    return 0;
}
// Output: Maximum Element: 9
