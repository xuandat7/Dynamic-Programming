#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n,s;
        cin >> n >> s;
        int a[n];
        int F[40005] = {0};
        F[0] = 1;
        for(int i=0; i<n; i++)  cin >> a[i];
        for(int i=0; i<n; i++){
            for(int j = s; j>=a[i]; j--){
                if(F[j-a[i]] == 1){
                    F[j] = 1;
                }
            }
        }
        
        if(F[s]) cout << "YES" << endl;
        else cout << "NO" << endl;

    }
    return 0;
}