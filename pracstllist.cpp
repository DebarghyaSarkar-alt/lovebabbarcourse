#include <iostream>
#include <list>
using namespace std; 
int main(){
    list<int> l;
    l.push_back(1); // Add 1 to the back we can also use pop_back() to remove the last element
    l.push_front(2); // Add 2 to the front we can also use pop_front() to remove the first element
   for(int i:l){
    cout << i << endl; // Print all elements in the list
   }
   //here erasing is like deque we need to use iterators
   l.erase(l.begin()); 
   cout<<"after erasing 1st element"<<endl;
    for(int i:l){
    cout << i << endl; // Print all elements in the list
   }
   list<int> c(l); // Copy constructor to create a list 'c' from 'l'
   

}