#include <bits/stdc++.h>
using namespace std;
bool backspaceCompare(string s, string t) {
    int slow1=0,slow2=0;
    for(char c:s) {
        if(c!='#') {
            s[slow1]=c;
            slow1++;
        }else {
            if(slow1)slow1--;//如果为 # 要删除，注意检验存在
        }
    }
    for(char c:t) {
        if(c!='#') {
            t[slow2]=c;
            slow2++;
        }else {
            if(slow2)slow2--;
        }
    }
    string s1=s.substr(0,slow1);
    string s2=t.substr(0,slow2);
    return s1==s2;
}
int main()
{
     cout<<backspaceCompare("ab#c","ad#c");
    return 0;
}
