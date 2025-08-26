#include <iostream>

using namespace std;
int cnt(int n){
    if(n==0){
        return 0;

        
    }
    return 1+cnt(n/10);
}
int main(){
    int n;
    cin>>n;
    cout<<cnt(n);
}