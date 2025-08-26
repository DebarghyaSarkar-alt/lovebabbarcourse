#include <iostream>
using namespace std;
int pivot(int arr[],int n,int k ){
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    while(start<end){

        if (arr[mid]>=arr[0])
        {
            start=mid+1;
        }

       
        else  
        {
            end = mid ;
        }
       
        mid = start + (end - start) / 2;// Update mid after changing start or end
        
        
        
    }
    return mid;
   
    
}
int binarySearch(int arr[], int start, int end, int k) {
    while (start <= end) {
        int mid = start + (end - start) / 2; // Avoids overflow
        if (arr[mid] == k) {
            return mid; // Element found
        } else if (arr[mid] < k) {
            start = mid + 1; // Search in the right half
        } else {
            end = mid - 1; // Search in the left half
        }
    }
    return -1; // Element not found
}
int main(){
    int arr[5]={3,7,9,1,2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2; // Element to search for
    int pivotIndex = pivot(arr, n, k);
    int result = -1;
    if (k >= arr[0]) {
        result = binarySearch(arr, 0, pivotIndex - 1, k); // Search in the left half
    } 
    else {
        result = binarySearch(arr, pivotIndex, n - 1, k); // Search in the right half
    }
    if (result != -1) {
        cout << "Element found at index " << result << std::endl;
    } 
    else {
        cout << "Element not found in the array." << std::endl;
    }
}