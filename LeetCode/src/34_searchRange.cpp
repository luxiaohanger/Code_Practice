#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int left=0;
        int right=nums.size()-1;
        int mid=left+(right-left)/2;
        vector<int> ans;
        bool check=false;
        while(left<=right) {
            if(nums[mid]==target) {
                check=true;
                break;
            }else if(nums[mid]>target)right=mid-1;
            else left=mid+1;
            mid=left+(right-left)/2;
        }
        if(!check) {
            ans.push_back(-1);
            ans.push_back(-1);
            return  ans;
        }


            for(int i=mid;i>=0;i--) {
                if(i==0&&nums[i]==target) {
                    ans.push_back(i);
                    break;
                }
                if(nums[i]!=target) {
                    ans.push_back(i+1);
                    break;
                }
            }

        for(int i=mid;i<nums.size();i++) {
            if(i==nums.size()-1&&nums[i]==target) {
                ans.push_back(i);
                break;
            }
            if(nums[i]!=target) {
                ans.push_back(i-1);
                break;
            }
        }
        return ans;
    }
};
