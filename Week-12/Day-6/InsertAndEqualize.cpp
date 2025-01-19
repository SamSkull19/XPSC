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
        int n;
        cin >> n;

        vector <ll> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }

        sort(v.begin(), v.end());
        if(n == 1){
            cout << 1 << endl;
            continue;
        }

        ll gcd = 0;
        for(int i=1; i<n; i++){
            ll x = v[i] - v[i-1];
            gcd = __gcd(x, gcd);
        }

        ll ans = 0, mx = v[n-1];
        for(int i=0; i<n; i++){
            ans += (mx - v[i]) / gcd;
        }
        
        ll c = 0;
        for(int i=n-1; i>=0; i--){
            int x = mx - (c * gcd);
            if(v[i] == x){
                c++;
            }
        }
        
        cout << ans + c << endl;
    }
    return 0;
}