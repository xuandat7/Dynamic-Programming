#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        int a[n+5];
        int dp1[n+5], dp2[n+5];
        
        for(int i=0; i<n; i++){
            cin >> a[i];
            dp1[i] = a[i];
            dp2[i] = a[i];
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<=i; j++){
                if(a[i] > a[j]){
                    dp1[i] = max(dp1[i], dp1[j] + a[i]);
                }
            }
        }
        for(int i=n-1; i>=0; i--){
            for(int j=n-1; j>=i; j--){
                if(a[i] > a[j]){
                    dp2[i] = max(dp2[i], dp2[j] + a[i]);
                }
            }
        }
        int ans = 0;
        for(int i=0; i<n; i++){
            ans = max(dp1[i]+dp2[i]-a[i], ans);
        }
        cout << ans << endl;
    }
    return 0;

}