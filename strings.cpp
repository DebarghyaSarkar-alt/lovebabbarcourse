#include <iostream>

using namespace std;
int gettinglength(char name[]){
    int i = 0;
    while(name[i] != '\0'){
        i++;
    }
    
    return i;
}

int reverse(char name[]){
    int s = 0;
    int e = gettinglength(name) - 1; // Get the length of the string and set end index
    while(s < e){
        swap(name[s], name[e]); // Swap characters at start and end indices
        s++;
        e--;
    }
    //the reversed string is:
    cout << "Reversed string is: " << name << endl; // Print the reversed string
    return 0;

}
int main(){
    char name[20];
    cout << "Enter your name: ";
    cin>> name;
    cout << "ur name is "<< name << endl;//this print till any newline char
    //finding length of string
    int l = gettinglength(name);
    cout << "Length of the string is: " << l << endl; // Print the length of the string
    //reversing the string
    reverse(name);
   



}
 

