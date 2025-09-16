class Solution {
public:
    int mySqrt(int x) {
        if(x==0)return 0;
        int left=1;
        int right =x/2;
        int mid=left+(right-left+1)/2;
        //ans*ans<=x
        while(left<right) {
            if ((long long)mid * mid > x) {  //避免大数溢出的方式之一---强制类型转换
                right=mid-1;
            }else {
                left=mid;
            }
            mid=left+(right-left+1)/2;
        }
        return left;
    }
};
