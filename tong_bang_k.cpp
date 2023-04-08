#include<bits/stdc++.h>
using namespace std;
int mod = 1e9 + 7;
int a[1005], F[1005];
int main(){
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        
        for(int i=1; i<=n; i++)  cin >> a[i];
        memset(F,0, sizeof(F));
        F[0] = 1;
        for(int i=1; i<=k; i++){
            for(int j=1; j<=n; j++){
                if(a[j] <= i)   F[i] = (F[i]+F[i-a[j]]) % mod;
            }
        }
        cout << F[k] << endl;
    }
    return 0;
}