#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--)
    {
        int n,m; cin >> n >> m;
        ll F[n+5][m+5];
        memset(F,0,sizeof(F));
        for(int i=0; i<=n; i++){
            F[i][0] = 1;
        }
        for(int i=0; i<=m; i++){
            F[0][i] = 1;
        }
        for(int i=0; i<=n; i++){
            for(int j=0; j<=m; j++){
                if(i==0 || j==0)    continue;
                F[i][j] = F[i-1][j] + F[i][j-1];
            }
        }
        cout << F[n][m] << endl;
    }
    
}