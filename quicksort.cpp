#include <iostream>
using namespace std;
int partition(int arr[],int s,int e){
    int pivot = arr[s];
    int cnt = 0;
    for (int i = s+1; i < e; i++)
    {
        if (arr[i]<=pivot)
        {
            cnt++;
        }
        
        
    }
    //placing pivot at right place
    int pivotindex=s+cnt;
    swap(arr[pivotindex],arr[s]);
    int i = s;
    int j = e;
    while(i<pivotindex && j>pivotindex)
    {
        if(arr[i]<pivot)
        {
            i++;
        }
        else if(arr[j]>pivot)
        {
            j--;
        }
        else
        {
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pivotindex;


}
void quicksort(int arr[],int s,int e){
    if(s >= e) {
        return; // base case: if the array has one or no elements
    }
    //partoition
    int p = partition(arr,s,e);
    //left sort
    quicksort(arr,s,p-1);
    //right sort
    quicksort(arr,p+1,e);
    
    

}
int main(){
    int arr[5]={2,4,1,6,9};
    int n= 5;
    quicksort(arr,0,n-1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}