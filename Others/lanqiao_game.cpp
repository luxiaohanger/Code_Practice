#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    sort(b.begin(), b.end()); // 为了二分找最近值

    int ans = 0;
    for (int i = 0; i < n; i++) {
        // 小桥会选离 a[i] 最近的 b[j]
        auto it = lower_bound(b.begin(), b.end(), a[i]);
        int d = INT_MAX;
        if (it != b.end()) d = min(d, abs(a[i] - *it));
        if (it != b.begin()) d = min(d, abs(a[i] - *prev(it)));
        // 小蓝希望最大化这个最小值
        ans = max(ans, d);
    }
    cout << ans << "\n";
    return 0;
}