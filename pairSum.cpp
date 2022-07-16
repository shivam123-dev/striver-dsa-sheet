#include<bits/stdc++.h>
using namespace std;
void pairSum(vector<int> arr, int n, int sum) {
    vector<vector<int> > ans;
    for(int i=0;i<n;i++) {
        for(int j=i+1;j<n;j++) {
            if(arr[i] + arr[j] == sum) {
                vector<int> temp;
                temp.push_back(min(arr[i], arr[j]));
                temp.push_back(max(arr[i], arr[j]));
                ans.push_back(temp);
            }
        }
    }
    for(int i=0;i<ans.size();i++) {
        for(int j=0;j<ans[i].size();j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}
int main() {
    int n;
    cin >> n;
    int sum;
    cin >> sum;
    vector<int> arr;
    for(int i=0;i<n;i++)
        cin >> arr[i];
    pairSum(arr, n, sum);
    return 0; 
}