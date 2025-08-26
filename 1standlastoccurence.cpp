#include <iostream>
using namespace std;
int firstandlast(int arr[],int n ,int k){
    int start = 0;
    int end = n - 1;
    int mid = (start + end) / 2;
    int ans = 0;
    while (start<=end){
        if (arr[mid]==k)
        {
            ans = mid;
            end = mid - 1; // Search in the left half for the first occurrence

        }
        else if (arr[mid]>=k)
        {
            end = mid - 1; // Search in the left half
        }
        else
        {
            start = mid + 1; // Search in the right half
        }
        mid = (start + end) / 2; // Update mid after changing start or end
    }
    return ans;
}
int lastoccurence(int arr[],int n ,int k){
    int start = 0;
    int end = n - 1;
    int mid = (start + end) / 2;
    int ans = -1; // Initialize ans to -1 to indicate not found
    while (start<=end){
        if (arr[mid]==k)
        {
            ans = mid;
            start = mid + 1; // Search in the right half for the last occurrence

        }
        else if (arr[mid]>=k)
        {
            end = mid - 1; // Search in the left half
        }
        else
        {
            start = mid + 1; // Search in the right half
        }
        mid = (start + end) / 2; // Update mid after changing start or end
    }
    return ans;
}
int main() {
    int arr[] = {1, 2, 2, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k;
    cout << "Enter the number to search: ";
    cin >> k;
    int first = firstandlast(arr, n, k);
    cout << "First occurrence of " << k << " is at index: " << first << endl;
    int last = lastoccurence(arr, n, k);
    cout << "Last occurrence of " << k << " is at index: " << last << endl;
    return 0;
}


        
        