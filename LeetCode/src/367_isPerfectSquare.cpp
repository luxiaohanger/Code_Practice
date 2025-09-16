#include <bits/stdc++.h>
using namespace std;
bool isPerfectSquare(int num) {
    int left=0;
    int right=num;
    int mid=left+(right-left)/2;
    while(left<=right) {
        if((long long)mid*mid==num)return true;
        else if((long long)mid*mid>num) {
            right=mid-1;
        }else {
            left=mid+1;
        }
        mid=left+(right-left)/2;
    }
    return false;
}
int main()
{
   cout<<isPerfectSquare(16);
    return 0;
}
