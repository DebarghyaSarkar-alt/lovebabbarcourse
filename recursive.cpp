#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int factorial(int n){
    if(n==0){
        return 1;
    }
    return n*factorial(n-1);
}
int main(){
    int num;
    cout<<"enter number";
    cin>>num;
    cout<<"the factoroial of number is: "<<factorial(num)<<endl;

}