#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int n = s.size();
        int dp[n+5];
        memset(dp, 0, sizeof(dp));
        if(s[0]=='0')   cout << 0 << endl;
        else{
            //dp[i] là số cách mã hoá đến kí tự i

            dp[0] = 1;
            dp[1] = 1;
            for(int i=2; i<=n; i++){
                if(s[i-1] >= '1'){
                    dp[i] = dp[i-1];  
                }
                if(s[i-2] == '1' || s[i-2] == '2' && s[i-1] < '7'){
                    dp[i] += dp[i-2];
                }
            }
            for(int i=0; i<=n; i++) cout << dp[i] << ' ';
            cout << dp[n] << endl;
        }
    }
}