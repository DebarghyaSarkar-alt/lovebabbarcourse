#include <iostream>
using namespace std;

int rootusebs(int n) {
    int start = 0, end = n, ans = 0;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (mid * mid == n)
            return mid;
        else if (mid * mid < n) {
            ans = mid;
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return ans;
}

int main() {
    int n;
    cout << "enter the number to find the root: ";
    cin >> n;
    cout << "the root of " << n << " is: " << rootusebs(n) << endl;
    return 0;
}