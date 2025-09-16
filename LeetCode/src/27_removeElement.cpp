#include <bits/stdc++.h>
using namespace std;
int removeElement(vector<int>& nums, int val) {
     int j=0;
    //快慢指针法 i-->快指针；j--慢指针
    for(int i=0;i<nums.size();i++) {
      if(nums[i]!=val) {
          nums[j]=nums[i];
          j++;
      }
  }
    return j;
}
int main()
{

    return 0;
}

