#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t; cin >> t;
    while(t--){
        ll F[55], n;
        cin >> n;
        F[0] = 1, F[1] = 1, F[2] = 2;
        for(int i=3; i<=50; i++){
            F[i] = F[i-1] + F[i-2] + F[i-3];
        }
        cout << F[n];
        cout << endl;
    }
    return 0;
}