#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        ll n, m, k;
        cin >> n >> m >> k;

        vector <ll> a(n + 1), b(m + 1);
        ll mx1 = 0, mx2 = 0, mn1 = LLONG_MAX, mn2 = LLONG_MAX;
        ll sum = 0;

        for(int i=1; i<=n; i++){
            cin >> a[i];
            mx1 = max(mx1, a[i]);
            mn1 = min(mn1, a[i]);
            sum += a[i];
        }

        for(int i=1; i<=m; i++){
            cin >> b[i];
            mx2 = max(mx2, b[i]);
            mn2 = min(mn2, b[i]);
        }

        ll mx = max(mx1, mx2);
        ll mn = min(mn1, mn2);
        k = (k - 1) % 2 + 1;

        if(k >= 1){
            sum += max(mx2 - mn1, 0LL);
        }
        if(k >= 2){
            sum += mn - mx;
        }
        cout << sum << endl;
    }
    return 0;
}