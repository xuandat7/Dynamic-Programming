#include<bits/stdc++.h>
using namespace std;

int mod = 1e9 + 7;
int C[1005][1005];
int main(){
    int t; cin >> t;
    while (t--)
    {
        int n, k; cin >> n >> k;
        
        for(int i=0; i<=n; i++){
            for(int j=0; j<=i; j++){
                if(j==0 || j==i){
                    C[i][j] = 1;
                }
                else C[i][j] = (C[i-1][j] + C[i-1][j-1]) % mod;
            }
        }
        cout << C[n][k] << endl;
    }
    
}