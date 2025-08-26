#include <iostream>
#include <stack>
using namespace std; 
int main(){
    stack<string> s;
    s.push("debarghya"); // Add "Hello" to the stack
    s.push("sarkar");
    s.push("hello"); // Add "World" to the stack    
    cout << "Top element: " << s.top() << endl; // Access the top element of the stack
    s.pop(); // Remove the top element from the stack
    cout << "Top element after pop: " << s.top() << endl; // Access the new top element of the stack
    cout << "Size of stack: " << s.size() << endl; // Get the size of the stack
    cout << "Is stack empty? " << (s.empty() ? "Yes" : "No") << endl; // Check if the stack is empty
    int n = s.size(); // Get the size of the stack
    for (int i = 0; i <n; i++)
    {
        cout << s.top() << " "; // Print all elements in the stack
        s.pop();
    } // Note: This will empty the stack, so it should be used carefully.



}
