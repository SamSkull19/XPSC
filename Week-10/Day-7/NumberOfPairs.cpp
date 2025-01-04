#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        ll n, l, r;
        cin >> n >> l >> r;

        vector <ll> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }

        sort(v.begin(), v.end());
        ll ans = 0;

        for(int i=0; i<n-1; i++){
            ll x = l - v[i];
            auto it1 = lower_bound(v.begin() + i + 1, v.end(), x);

            ll y = r - v[i];
            auto it2 = upper_bound(v.begin() + i + 1, v.end(), y);

            ans += (it2 - it1);
        }
        cout << ans << endl;
    }
    return 0;
}