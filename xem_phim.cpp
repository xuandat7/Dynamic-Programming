#include <bits/stdc++.h>
using namespace std;
int c, n;
int a[105], f[25005];

int main()
{
    cin >> c >> n;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    memset(f, 0, sizeof(f));
    for(int i=1; i<=n; i++){
        for(int j = c; j>=a[i]; j--){
            f[j] = max(f[j], f[j-a[i]] + a[i]);
        }
    }
    cout << f[c] << endl;
    return 0;
}