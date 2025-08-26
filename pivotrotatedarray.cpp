#include <iostream>
using namespace std;
int pivot(int arr[],int n ){
    int start = 0;
    int end = n - 1;
    int mid = (start + end) / 2;
    while(start<=end){
        if (arr[mid]<=arr[mid+1])
        {
            return mid;

        }
        else if (arr[mid-1]>arr[mid+1])
        {
            start = mid +1;
        }
        else{
            end = mid-1;
        }
        mid = (start + end) / 2; // Update mid after changing start or end
        
        
    }
    return mid;
}
int main(){
    int arr[5]={3,7,9,1,2};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<"the pivot element is: "<<pivot(arr,n)<<endl;

}