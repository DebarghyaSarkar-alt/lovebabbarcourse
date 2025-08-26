#include <iostream>
using namespace std;

int binarySearch(const int arr[], int size, int target) {
    int start = 0, end = size - 1;
            int mid = start + (end - start) / 2; // Avoids overflow


    while (start <= end) {

        if (arr[mid] == target) {
            return mid; // Target found
        } else if (arr[mid] < target) {
            start = mid + 1; // Search in the right half
        } else {
            end = mid - 1; // Search in the left half
        }
        mid = start + (end - start) / 2; // Update mid after changing start or end
    }

    return -1; // Target not found
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;

    cout << "Enter the number to search: ";
    cin >> target;

    int result = binarySearch(arr, size, target);

    if (result != -1) {
        cout << "Element found at index " << result << std::endl;
    } else {
        cout << "Element not found in the array." << std::endl;
    }

    return 0;
}