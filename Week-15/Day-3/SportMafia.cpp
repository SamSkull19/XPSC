#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, k;
    cin >> n >> k;

    auto ok = [&](ll x){
        ll a = (n - x) * (n - x + 1) / 2;
        ll s = a - x;
        return s;
    };

    ll l = 0, r = n, mid, ans = 0;
    while(l <= r){
        mid = (l + r) / 2;
        if(ok(mid) == k){
            ans = mid;
            break;
        }
        else if(ok(mid) > k){
            l = mid + 1;
        }

        else{
            r = mid - 1;    
        }
    }
    cout << ans << endl;
    return 0;
}