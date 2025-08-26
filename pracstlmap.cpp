#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<int, string> m;
    m[1] = "debarghya"; // Insert key-value pair (1, "debarghya")
    m[2] = "sarkar";    // Insert key-value pair (2, "sarkar")
    m[13] = "hello";    // Insert key-value pair (13, "hello")
    for (auto i : m)
    {
        cout << i.first << " "; // Print all key-value pairs in the map
    }
    cout<<"finding the value at key 2: "<<m[2]<<endl; // Access the value at key 2
    cout<<"size of the map is "<<m.size()<<endl; // Get the size of the map
    cout<<"erasing the value at key 2"<<endl;
    m.erase(2); // Erase the key-value pair with key 2
    for (auto i : m)
    {
        cout << i.first << endl; // Print all key-value pairs in the map
    }
    auto it = m.begin(); // Get an iterator to the beginning of the map
    for(auto i = it;i != m.end(); i++) {
        cout << i->first << " " << i->second << endl; // Print all key-value pairs using an iterator
    }
}