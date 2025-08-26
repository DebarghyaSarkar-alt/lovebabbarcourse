#include <iostream>
#include <set>
using namespace std; 
int main(){
    set <int> s;
    s.insert(1); // Insert 1 into the set
    s.insert(1); // Insert 1 into the set
    s.insert(2); // Insert 2 into the set
    s.insert(2); // Insert 2 into the set
    s.insert(3); // Insert 3 into the set
    for (int i : s) {
        cout << i << " "; // Print all elements in the set
    }
    s.erase(s.begin()); // Erase the first element
    cout << "\nAfter erasing the first element: ";
    for (int i : s) {
        cout << i << " "; // Print all elements in the set after erasing
    }
    cout<<"the count is "<<s.count(2)<<endl; // Count occurrences of 2 in the set
    set<int>::iterator it = s.find(2); // Find the element 2 in the set
    cout<<"value present at iterator is "<<*it<<endl; // Dereference the iterator to get the value
    for(auto it = s.begin(); it != s.end(); ++it) {
        cout << *it << " "; // Print all elements in the set using an iterator
    }
}
    
