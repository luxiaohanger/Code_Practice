#include <bits/stdc++.h>
using namespace std;
void moveZeroes(vector<int>& nums) {
        int slow=0;
    for(int fast=0;fast<nums.size();fast++) {
        if(nums[fast]!=0) {
            nums[slow]=nums[fast];
            slow++;
        }//注意条件判断结构的 代码块
    }
    for(;slow<nums.size();slow++) {
        nums[slow]=0;
    }
    return;
}
int main()
{

    return 0;
}

