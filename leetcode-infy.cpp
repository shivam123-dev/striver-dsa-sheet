#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
        cin >> a[i];
    int m;
    cin >> m;
    vector<int> b(m);
    for(int i=0;i<m;i++)
        cin >> b[i];
    vector<int> c;
    int i = 0, j = 0;
    for(int k=0;k<(n+m);k++) {
        if(k%2 == 0)
            c.push_back(a[i++]);
        else
            c.push_back(b[j++]);
    }
    int cs = c[0];
    for(int i=1;i<(n+m);i++){
        cs += c[i];
        c[i] = cs;
    }
    int ans = INT_MIN;
    for(int i=0;i<(n+m);i++)
        ans = max(ans, c[i]);
    cout << ans << endl;
    return 0;
}