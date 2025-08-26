#include <iostream>

using namespace std;
int main(){
    int arr[3][4]={
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    //row-wise sum
    int max = 0;

    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 4; j++)
        {
            sum += arr[i][j]; // Calculate the sum of each row
        }
        if (sum > max) {
            max = sum; // Update max if the current row sum is greater
        }
        
    }
    cout << "Maximum row sum is " << max << endl; // Print the maximum row sum
    //column-wise sum
    // for (int i = 0; i < 4; i++)
    // {
    //     int sum = 0;
    //     for (int j = 0; j < 3; j++)
    //     {
    //         sum += arr[j][i]; // Calculate the sum of each column
    //     }
    //     cout << "Sum of column " << i+1<< " is " << sum << endl;
    // }

    

}