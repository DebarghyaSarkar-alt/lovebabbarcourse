#include<stdio.h>
using namespace std;
int main(){
    // Stack using array
    /*
    int stack[100];
    int top=-1;
    //push operation
    top++;
    stack[top]=5;
    top++;
    stack[top]=10;
    //pop operation
    top--;
    //print top element
    printf("Top element is %d\n",stack[top]);
    */

    // Stack using STL
    #include<stack>
    stack<int> s;
    //push operation
    s.push(5);
    s.push(10);
    //pop operation
    s.pop();
    //print top element
    printf("Top element is %d\n",s.top());
    if(s.empty())cout<<"Stack is empty\n";
    else cout<<"Stack is not empty\n";
}