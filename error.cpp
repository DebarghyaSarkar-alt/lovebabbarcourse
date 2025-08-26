#include <iostream>
#include <vector>
using namespace std;

int maxSubArraySum(const vector<int>& nums) {
    int maxSum = nums[0];
    int n = nums.size();
    for (int i = 0; i < n; ++i) {
        int currentSum = 0;
        for (int j = i; j < n; ++j) {
            currentSum += nums[j];
            if (currentSum > maxSum) {
                maxSum = currentSum;
            }
        }
    }
    return maxSum;
}

int main() {
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << "Maximum subarray sum is " << maxSubArraySum(arr) << endl;
    return 0;
}