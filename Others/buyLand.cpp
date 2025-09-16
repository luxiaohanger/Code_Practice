#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>> map(n,vector<int>(m));
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin>>map[i][j];
        }
    }
    vector<vector<int>> sum(n+1,vector<int>(m+1));
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=m;j++) {
            sum[i][j]=map[i-1][j-1]+sum[i][j-1]+sum[i-1][j]-sum[i-1][j-1];
        }
    }
    int min_det=sum[n][m];
    for(int i=1;i<=n;i++) {
        min_det=min(min_det,abs(sum[n][m]-sum[i][m]*2));
    }
    for(int j=1;j<=m;j++) {
        min_det=min(min_det,abs(sum[n][m]-sum[n][j]*2));
    }
    cout<<min_det;

    return 0;
}
