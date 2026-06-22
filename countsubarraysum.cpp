#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, -3, 1, 1, 1, 4, 2, -3};
    unordered_map<int, int> m;
    m[0] = 1;
    int k =3;
    int sum = 0;
    int cnt = 0;
    for (int i = 0; i < 10; i++)
    {
        sum = sum + arr[i]; // we calculated the presum till ith index
        int rem=sum-k;
        if (m.find(rem) != m.end()){
            cnt = cnt+m[rem];
        }
        m[sum]++;
    }
    cout << cnt << endl;
    return 0;
}
