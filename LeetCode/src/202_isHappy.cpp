#include <bits/stdc++.h>
using namespace std;
int change(int num) {
    string str=to_string(num);
    int ans=0;
    for(char c:str) {
        ans+=(c-'0')*(c-'0');
    }
    return ans;
}
bool isHappy(int n) {
        unordered_set<int> pre;
    pre.insert(n);
    while(n!=1) {
        n=change(n);
        if(pre.find(n)!=pre.end())return false;
        pre.insert(n);
    }
    return true;
}
int main() {

    return 0;
}