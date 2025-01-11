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
        ll n, k;
        cin >> n >> k;

        ll l = k - 1, r = k + n, mid;

        auto ok = [&](ll x){
            ll a = (k + x) * (x - k + 1) / 2;
            ll b = (x + 1 + n + k - 1) * (n - x + k - 1) / 2;
            ll res = abs(a - b);
            return res;
        };

        while(l <= r){
            mid = (l + r) / 2;

            if(ok(mid) > ok(mid + 1)){
                l = mid + 1;
            }
            else{
                r = mid - 1;
            }
        }

        ll a = ok(l);
        ll b = ok(r);
        cout << min(a, b) << endl;
     }
    return 0;
}