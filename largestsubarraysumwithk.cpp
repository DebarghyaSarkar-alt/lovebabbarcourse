#include <iostream>
#include <unordered_map>
using namespace std;
int main(){
    int arr[]={1,2,3,1,1,1,4,2,3};
    unordered_map<int,int> m;
    int sum=0;
    int k=3;
    int len= 0;
    for(int i = 0; i < 9; i++){
        sum+=arr[i];
        int rem=sum-k;
        if(m.find(rem)!=m.end()){
            len=max(len,i-m[rem]);
        }
        m[sum]=i;
    }
    cout << len << endl;
    return 0;
}