#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector <ll> v(n);
    vector <ll> a(n);
    ll mx = 0;
    for(int i=0; i<n; i++){
        cin >> v[i];
        mx = max(mx, v[i]);
    }    
    
    ll x = 0;
    for(int i=0; i<n; i++){
        a[i] = mx - v[i];
        x = __gcd(x, a[i]);
    }
    
    ll ans = 0;
    for(int i=0; i<n; i++){
        ans += a[i] / x;
    }

    cout << ans << " " << x << endl;
    return 0;
}