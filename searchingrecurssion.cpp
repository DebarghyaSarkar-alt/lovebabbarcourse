#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool search(int *arr,int n,int key){
    
    if(n==0){
        return false;
    }
    if(arr[0]==key){
        return true;
    }
    return search(arr+1,n-1,key);
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key = 3;
    if(search(arr,n,key)){
        cout<<"Found";
    }
    else{
        cout<<"Not Found";
    }
    return 0;
}