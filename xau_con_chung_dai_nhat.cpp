#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        string s, q; cin >> s >> q;
        int n = s.size(), m = q.size();
        int F[n+5][m+5];
        memset(F,0,sizeof(F));
        for(int i=0; i<=n; i++){
            for(int j=0; j<=m; j++){
                if(i==0 || j==0){
                    F[i][j] = 0;
                }
                else{
                    if(s[i-1] == q[j-1]){
                        F[i][j] = F[i-1][j-1]+1;
                    }
                    else F[i][j] = max(F[i-1][j], F[i][j-1]);
                }
            }
        }
        for(int i=0; i<=n; i++){
            for(int j=0; j<=m; j++){
                cout << F[i][j] << ' ';
            }
            cout << endl;
        }
        cout << F[n][m];
        cout << endl;
    }
    return 0;
}