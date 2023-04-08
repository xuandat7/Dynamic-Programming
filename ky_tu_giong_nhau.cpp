#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int x,y,z; cin >> x >> y >> z;
        int F[105] = {0};
        F[1] = x;
        for(int i=2; i<=n; i++){
            if(i%2==0){
                F[i] = min(F[i-1] + x, F[i/2] + z);
            }
            else    F[i] = min(F[i-1] + x, F[(i+1)/2] + z + y);
        }
        cout << F[n];
        cout << endl;
    }
    return 0;
}