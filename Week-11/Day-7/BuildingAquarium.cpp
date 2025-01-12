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

        vector <ll> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }

        sort(v.begin(), v.end());
        auto ok = [&](ll x){
            ll s = 0;
            for(int i=0; i<n; i++){
                if(v[i] < x){
                    s += x - v[i];

                    if(s > k){
                        return false;
                    }
                }
            }
            return (s <= k);
        };

        ll l = 1, r = v[n-1] + k / n, mid, ans;
        while(l <= r){
            mid = l + (r - l) / 2;

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