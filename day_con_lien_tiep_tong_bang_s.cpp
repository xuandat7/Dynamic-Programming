#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie();
    int t; cin >> t;
    while (t--)
    {
        int n; ll s; cin >> n >> s;
        ll a[n+5];
        for(int i=0; i<n; i++)  cin >> a[i];
        ll sum = 0;
        int l = 0;
        int ok = 0;
        for(int r=0; r<n; r++){
            sum += a[r];
            while(sum > s && l < r){
                sum-=a[l];
                l++;
            }
            if(sum==s){
                ok = 1;
                break;
            }
        }
        if(!ok) cout << "NO";
        else cout << "YES";
        cout << endl;
    }
    
}