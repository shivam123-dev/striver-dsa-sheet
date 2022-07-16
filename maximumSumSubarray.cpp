#include <bits/stdc++.h>
using namespace std;
long long maxSubarraySum(int arr[], int n)
{
    long long ans = 0, curr_sum = 0;
    for (int i = 0; i < n; i++)
    {
        curr_sum += arr[i];
        if (curr_sum < 0)
            curr_sum = 0;
        ans = max(ans, curr_sum);
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    cout << maxSubarraySum(arr, n) << endl;
    return 0;
}