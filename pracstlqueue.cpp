#include <iostream>
#include <queue>
using namespace std; 
int main(){
    queue<string> q;
    q.push("debarghya"); // Add "debarghya" to the queue
    q.push("sarkar"); // Add "sarkar" to the queue
    q.push("hello"); // Add "hello" to the queue
    cout<< "Front element: " << q.front() << endl; // Access the front element of the queue
    q.pop(); // Remove the front element from the queue
    cout << "Front element after pop: " << q.front() << endl; // Access the new front element of the queue
    int n = q.size(); // Get the size of the queue
    for (int i = 0; i < n; i++)
    {
        cout << q.front() << " ";
        q.pop();
    }//yaha wo range wala nhi kr sakte
   
    

}