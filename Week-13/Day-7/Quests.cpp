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
        ll n, c, d;
        cin >> n >> c >> d;

        vector <ll> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }

        sort(v.rbegin(), v.rend());
        ll sum = 0;
        int z = min(n, d);
        for(int i=0; i<z; i++){
            sum += v[i];
        }

        if(sum >= c){
            cout << "Infinity" << endl;
            continue;
        }
        if(v[0] * d < c){
            cout << "Impossible" << endl;
            continue;
        }

        auto ok = [&](ll x){
            ll s = 0;
            for(ll i=0; i<d; i++){
                int a = i % (x + 1);
                if(a < n){
                    s += v[a];
                }
            }
            return s >= c;
        };
        
        ll l = 0, r = 2e5, mid, ans = 0;
        while(l <= r){
            mid = (l + r) / 2;
            if(ok(mid)){
                ans = mid;
                l = mid + 1;
            }
            else{
                r = mid - 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}