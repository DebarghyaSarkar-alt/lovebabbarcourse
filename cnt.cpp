#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int cnt(int n){
    if (n==0){
        return 1;
    }
    cout << n<<endl;
    cnt(n-1);
}
int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cnt(num);
   
    return 0;
}