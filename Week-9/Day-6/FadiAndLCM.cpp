#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll x;
    cin >> x;

    ll ans = x;
    for(ll i=2; i*i <= x; i++){
        if(x % i == 0){
            ll s = __gcd(i, x/i);
            if(s == 1){
                ll b = max(i, x/i);
                ans = min(ans, b);
            }
        }
    }

    if(ans == x){
        cout << 1 << " " << x << endl;
    }
    else{
        cout << ans << " " << x/ans << endl;
    }
    return 0;
}