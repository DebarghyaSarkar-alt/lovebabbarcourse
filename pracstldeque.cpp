#include <iostream>
#include<deque>
using namespace std; 
int main(){
    deque<int> d;
    d.push_back(1); // Add 1 to the back
    d.push_front(2); // Add 2 to the front
    for (int i = 0; i < d.size(); i++)
    {
        cout << d[i] << endl; // Print all elements in the deque
    }
    //d.pop_front();
    cout << "After popping front: " << endl;
    for (int i = 0; i < d.size(); i++)
    {
        cout << d[i] << endl; // Print all elements in the deque after popping front
    }
    cout<< "Front element: " << d.front() << endl; // Access the front element
    cout<<"element at 1st index: " << d.at(1) << endl; // Access the element at index 1
    //erasing deque is diffrent from vector we need to use iterators
        cout<<d.size()<< endl; 

    d.erase(d.begin(),d.begin()+1);
    cout<< "after erase function "<<d.size()<<endl; // Erase the first element
    //another way of printing the deque
    cout << "Elements in the deque after erase: " << endl;
     for(int i:d){
    cout << i << endl; // Print all elements in the list
   }
    
}

