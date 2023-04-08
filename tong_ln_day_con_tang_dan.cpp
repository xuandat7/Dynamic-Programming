#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        int a[n], F[n];
        int ans = 0;
        for(int i=0; i<n; i++)  cin >> a[i];
        for(int i=0; i<n; i++){
            F[i] = a[i];
            for(int j=0; j<i; j++){
                if(a[j] < a[i]){
                    F[i] = max(F[i], F[j]+a[i]);
                }
            }
            ans = max(ans, F[i]);
        }
        cout << ans << endl;
    }
    
}