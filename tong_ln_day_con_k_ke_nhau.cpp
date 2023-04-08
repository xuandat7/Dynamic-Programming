#include<bits/stdc++.h>
using namespace std;
int a[1000005], F[1000005];
int main(){
    int t; cin >> t;
    while(t--){ 
        int n; cin >> n;
        for(int i=1; i<=n; i++)  cin >> a[i];
        F[1] = a[1];
        F[2] = max(a[1], a[2]);
        for(int i=3; i<=n; i++){
            F[i] = max(F[i-2]+a[i], F[i-1]);
        }
        cout << F[n] << endl;
    }
    return 0;
}