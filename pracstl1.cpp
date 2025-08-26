#include <iostream>
#include<array>
using namespace std; 
int main(){
    int basic[3] = {1,2,3};
    array<int, 4> a = {1, 2, 3, 4}; // std::array with size 4
    int size = a.size();
    for(int i = 0; i < size; i++){
        cout << a[i] << endl; // Accessing elements using the subscript operator
    }
    cout<< "the element at index 2 is"<< a.at(2);//to get to a certain index
    cout<<"empty or not"<<a.empty(); // Check if the array is empty
    cout<<"the first element is"<<a.front(); // Access the first element
    cout<<"the last element is"<<a.back(); // Access the last element   
    


}

  