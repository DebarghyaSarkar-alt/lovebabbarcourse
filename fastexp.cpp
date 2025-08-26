#include <iostream>
using namespace std;
int exp(int n,int p){
     
    if(p==0){
        return 1;
    }
    if (p%2==0){
        return exp(n*n,p/2);
    }
    else{
        return n*exp(n,p-1);
    }
}
int main(){
    int n, p;
    cout << "Enter the base number: ";
    cin >> n;
    cout << "Enter the exponent: ";
    cin >> p;
    int result = exp(n, p);
    cout << n << " raised to the power of " << p << " is: " << result << endl;
    return 0;

}