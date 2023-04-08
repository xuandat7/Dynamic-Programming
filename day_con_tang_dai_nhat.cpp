#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int a[n], F[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int ans = 0;
    for(int i=0; i<n; i++){
        F[i] = 1;
        for(int j=0; j<i; j++){
            if(a[j] < a[i]){
                F[i] = max(F[i], F[j]+1);
            }
        }
        ans = max(ans, F[i]);
    }
    cout << ans;
    return 0;
}