#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int pow(int n)
{
    if (n==0){
        return 1;
    }
    return 2*pow(n-1);

}
int main()
{
    int num;
    cout << "Enter the power of 2: ";
    cin >> num;
    cout << "2 raised to the power of " << num << " is: " << pow(num) << endl;
    return 0;
}