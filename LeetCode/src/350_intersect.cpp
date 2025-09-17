#include <bits/stdc++.h>
using namespace std;
vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
    unordered_multiset<int> a(nums1.begin(),nums1.end());
    unordered_multiset<int> ansset;
    for(int x:nums2) {
        auto it=a.find(x);
        if(it!=a.end()) {
            ansset.insert(x);
            a.erase(it);
        }
    }
    vector<int> ans(ansset.begin(),ansset.end());
    return ans;
}
int main() {

    return 0;
}
