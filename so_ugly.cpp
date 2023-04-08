#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    cin.tie(0);
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        ll F[n+5] = {0};
        F[1] = 1;
        // so 1 la ugly dau tien cua tat ca cac uoc
        ll i2 = 1, i3 = 1, i5 = 1;
        for(int i=2; i<=n; i++){
            // tim min cua bo ba boi so gan nhat cua 2, 3, 5
            F[i] = min(F[i2]*2, min(F[i3]*3, F[i5]*5));

            // cap nhat chi so
            if(F[i] == F[i2]*2) i2++;
            if(F[i] == F[i3]*3) i3++;
            if(F[i] == F[i5]*5) i5++;
        }
        cout << F[n] << endl;
    }
    
}