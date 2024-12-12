#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        ll n;
        cin >> n;

        vector <ll> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }

        map <ll, ll> mp;
        for(auto i : v){
            ll mxBit = __lg(i);
            mp[mxBit]++;
        }

        ll ans = 0;
        for(auto [i, j] : mp){
            if(j > 1){
                ans += ((j * (j - 1)) / 2);
            }
        }
        cout << ans << endl;
    }
    return 0;
}