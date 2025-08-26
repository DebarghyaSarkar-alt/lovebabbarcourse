#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v;
    vector<int> a(5,1); // Create a vector of size 5, initialized with 1
    vector<int> last(a); // Copy constructor to create a vector 'last' from 'a'
    cout<< "Size of vector: " << v.size() << endl; // Size of the vector
    v.push_back(1);
    cout<< "Size of vector: " << v.size() << endl; // Size of the vector
    v.push_back(2);
    cout<< "Size of vector: " << v.size() << endl; // Size of the vector
    v.push_back(3); 
    cout<< "Size of vector: " << v.size() << endl; // Size of the vector 
    cout<<"capacity of the vector is " << v.capacity() << endl; // Capacity of the vector
    cout<< "the element at index 2 is"<< v.at(2);//to get to a certain index
    cout<<"the first element is"<<v.front(); // Access the first element
    cout<<"the last element is"<<v.back(); // Access the last element   
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " "; // Print all elements in the vector
    }
    v.pop_back(); // Remove the last element
    for (int i = 0; i < v.size(); i++)
    {
        cout <<"after popping"<< v[i] << " "; // Print all elements in the vector
    }
    v.clear(); // Clear the vector
    //clearing the vector makes the size of the vector zero not the capacity
    

    





}