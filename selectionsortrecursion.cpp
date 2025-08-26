#include <iostream>
using namespace std;

void selectionSort(int *arr, int n) {
    // base case
    if (n == 0 || n == 1) {
        return;
    }

    // find index of minimum element
    int minIndex = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }

    // swap with first element
    swap(arr[minIndex], arr[0]);

    // recursive call on remaining array
    selectionSort(arr + 1, n - 1);
}

int main() {
    int arr[] = {5, 2, 9, 1, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
