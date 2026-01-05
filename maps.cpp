#include<stdio.h>
using namespace std;
#include<map>
int main(){
    int arr[10]={1,2,2,3,4,4,5,5,5,6};
    int freq[7]={0};//since there is max element 6
    // for(int i=0;i<10;i++){
    //     freq[arr[i]]++;
    // }
    // for(int i=0;i<=6;i++){
    //     if(freq[i]>0){
    //         printf("Element %d has frequency %d\n",i,freq[i]);
    //     }
    // }
    map<int,int> m;
    for(int i=0;i<10;i++){
        m[arr[i]]++;
    }
    for(auto p:m){
        printf("Element %d has frequency %d\n",p.first,p.second);
    }
    

}