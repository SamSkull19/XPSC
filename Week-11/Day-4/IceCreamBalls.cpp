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
        ll n;
        cin >> n;

        auto ok = [&](ll x){
            ll a = x * (x-1) / 2;
            if(a <= n){
                return true;
            }
            return false;
        };

        ll l = 1, r = 2e9, mid, ans;
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
        
        ll s = ans * (ans-1) / 2;
        ll x = n - s;
        cout << ans + x << endl;
    }
    return 0;
}