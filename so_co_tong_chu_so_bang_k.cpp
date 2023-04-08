#include<bits/stdc++.h>
using namespace std;
#define ll long long
int mod = 1e9 +7;
ll F[105][50005];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    for(int i=0; i<101; i++)    F[i][0] = 0;
    for(int i=0; i<50005; i++)  F[0][i] = 0;
    for(int i=1; i<=9; i++)     F[1][i] = 1;

    for(int i=1; i<=100; i++){
        for(int so=0; so<=9; so++){
            for(int j = so; j<=50000; j++){
                F[i][j] = (F[i][j]%mod + F[i-1][j-so]%mod)%mod;
            }
        }
    }
    int t; cin >> t;
    while(t--){
        
        int n, k; cin >> n >> k;
        
        cout << F[n][k] << endl;
        

    }
    return 0;
}