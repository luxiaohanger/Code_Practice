#include <bits/stdc++.h>
using namespace std;
vector<int> twoSum1(vector<int>& nums, int target) {
    unordered_multimap<int,int> map;
    for(int i=0;i<nums.size();i++) {
        map.insert({nums[i],i});
    }
    for(int i=0;i<nums.size();i++) {
        auto it=map.find(target-nums[i]);
        if(it!=map.end()) {
            if(it->second==i){
                map.erase(it);
                auto it2=map.find(target-nums[i]);
               
                if(it2!=map.end())return {i,it2->second};
            }else {
                return {i,it->second};
            }
        }
    }
    return {0,0};
}
vector<int> twoSum2(vector<int>& nums, int target) {
    unordered_map<int, int> hashtable;
    for (int i = 0; i < nums.size(); ++i) {
        auto it = hashtable.find(target - nums[i]);
        if (it != hashtable.end()) {
            return {it->second, i};
        }
        hashtable[nums[i]] = i;//刚开始不初始化hashmap,而是在查询后插入，这样就不会和自己匹配
    }
    return {};
}

int main() {

    return 0;
}
