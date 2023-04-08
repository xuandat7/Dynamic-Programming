#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n, v;
        cin >> n >> v;
        int F[n+5][v+5];
        int c[n+5], a[n+5];
        for(int i=1; i<=n; i++){
            cin >> a[i];
        }
        memset(F, 0, sizeof(F));
        for(int i=1; i<=n; i++)  cin >> c[i];
        for(int i=1; i<=n; i++){
            for(int j=1; j<=v; j++){
                F[i][j] = F[i-1][j];
                if(a[i] <= j){
                    F[i][j] = max(F[i-1][j-a[i]] + c[i], F[i][j]);
                }
            }
        }
        // for(int i=1; i<=n; i++){
        //     for(int j=1; j<=v; j++){
        //         cout << F[i][j] << ' ';
        //     }
        //     cout << endl;
        // }
        cout << F[n][v] << endl;
    }
    return 0;
}