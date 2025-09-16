#include <bits/stdc++.h>
using namespace std;

int minSubArrayLen(int target, vector<int>& nums) {
    int left=0,right =0;
    int ans=0;
    int n=nums.size();
    vector<int> S;
    S.push_back(0);
    int sum=0;
    for(int i=0;i<nums.size();i++) {
        sum+=nums[i];
        S.push_back(sum);
    }
    if(S[n]<target)return 0;
    //也可以不需要辅助前缀和S 窗口移动时直接减去/加上nums[i/j]就可以
    while(S[right+1]<target)right++;
    ans=right+1;
    while(right<nums.size()) {
        while(S[right+1]-S[left]>=target) {
            left++;
        }
        left--;
        ans=min(ans,right-left+1);
        right++;
    }
    return ans;
}

int main()
{

    return 0;
}

