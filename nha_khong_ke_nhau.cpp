#include<bits/stdc++.h>
using namespace std;
int a[1000005], F[1000005];
int main(){
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        for(int i=0; i<n; i++)  cin >> a[i];
        F[0] = a[0];
        F[1] = max(F[0], a[1]);
        for(int i=2; i<n; i++){
            F[i] = max(F[i-2] + a[i], F[i-1]);

        }
        cout << F[n-1] << endl;
    }
    return 0;
    
}