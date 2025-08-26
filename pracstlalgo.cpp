#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1); // Add 1 to the vector
    v.push_back(2); // Add 2 to the vector
    v.push_back(3); // Add 3 to the vector
    v.push_back(4); // Add 3 to the vector

    v.push_back(5); // Add 3 to the vector
    cout<< binary_search(v.begin(),v.end(),4) << endl; // Check if 4 is present in the vector
    cout<<"lower bound of 3 is: " << lower_bound(v.begin(),v.end(),3)-v.begin() << endl; // Find the lower bound of 3
}