#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--)
    {
        int n, m; cin >> n >> m;
        int a[n+5][m+5];
        int dp[n+5][m+5] = {0};
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                cin >> a[i][j];
                dp[i][j] = a[i][j];
            } 
        }
        // dp[i][j] la kich thuoc hinh vuong tai diem (i, j)
        int ans = 0;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                if(a[i][j] == 0)   continue;
                if(a[i][j] == a[i-1][j-1] && a[i][j] == a[i-1][j] && a[i][j] == a[i][j-1]){
                    dp[i][j] = min(dp[i-1][j-1], min(dp[i-1][j], dp[i][j-1]))+1;
                }
                ans = max(ans, dp[i][j]);
            }
        }
        cout << ans << endl;

    }
    return 0;
}