#include <iostream>
using namespace std;
bool ispossible(int arr[], int n, int k, int mid)
{
    int woodsum = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[mid])
        {
            woodsum += arr[i] - arr[mid];
            
        }
        if (woodsum > k)
        {
            return 0; 
        }
    }
    return 1;
}
    

int main()
{
    int arr[4] = {10, 15, 17, 20};
    int s = 0;
    int e = 3;
    int mid = (s + e) / 2;
    int ans = 0;
    while (s <= e)
    {
        if (ispossible(arr, 4, 3, mid))
        {
            ans = arr[mid];
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = (s + e) / 2; // Update mid after changing start or end
    }
    cout << "The maximum height of the saw blade is: " << ans << endl;
    return 0;
}
