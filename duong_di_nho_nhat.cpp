#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while (t--)
    {
        int n, m; cin >> n >> m;
        int a[n+5][m+5];
        int F[n+5][m+5]; memset(F, 0, sizeof(F));
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                cin >> a[i][j];
            }
        }
        F[1][1] = a[1][1];
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                if(i==1)    F[i][j] = F[i][j-1] + a[i][j];
                else if(j==1)    F[i][j] = F[i-1][j] + a[i][j];
                else{
                    F[i][j] = min(F[i-1][j-1], min(F[i-1][j], F[i][j-1])) + a[i][j];
                }
            }   
        }
       
        cout << F[n][m] << endl;
    }
    
}