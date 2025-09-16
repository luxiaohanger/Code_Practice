#include <bits/stdc++.h>
using namespace std;
struct element {
    int val;
    pair<int,int> index;
};
bool cmpval(element& a,element& b) {
    return a.val<b.val;
}
int main(){

    int n;
    cin>>n;
    vector<int> a(n);
    vector<int> b(n);
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    for(int i=0;i<n;i++) {
        cin>>b[i];
    }
    vector<vector<int>> det(n,vector<int>(n));
    vector<element> elements;
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            det[i][j]=abs(a[i]-b[j]);
            elements.push_back({det[i][j],{i,j}});
        }
    }
    sort(elements.begin(),elements.end(),cmpval);
    int p=0,q=n*n-1;
    n--;
    while(n--) {
        while(a[elements[p].index.first]==0||b[elements[p].index.second]==0) {
            p++;
        }
        a[elements[p].index.first]=0;
        p++;
        while(a[elements[q].index.first]==0||b[elements[q].index.second]==0) {
            q--;
        }
        b[elements[q].index.second]=0;
        q--;
    }
    int i,j;
    for(int x:a) {
        if(x) {
            i=x;
            break;
        }
    }
    for(int x:b) {
        if(x) {
            j=x;
            break;
        }
    }
    cout<<abs(i-j);
return 0;
}
