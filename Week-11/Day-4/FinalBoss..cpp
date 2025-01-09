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
        int h, n;
        cin >> h >> n;

        vector <int> v(n), a(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }
        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        auto ok = [&](ll x){
            ll ans = 0;
            for(int i=0; i<n; i++){
                ans += v[i] * ((x + a[i] - 1) / a[i]);
                if(ans >= h){
                    return true;
                }
            }
            return false;
        };

        ll l = 1, r = 4e10, ans, mid;
        while(l <= r){
            mid = (l + r) / 2;

            if(ok(mid)){
                ans = mid;
                r = mid - 1;
            }
            else{
                l = mid + 1;
            }
        }

        cout << ans << endl;
    }
    return 0;
}