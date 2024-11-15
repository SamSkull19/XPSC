#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        ll n, k, q;
        cin >> n >> k >> q;

        vector <ll> v(n);
        ll cnt = 0;

        for(int i=0; i<n; i++){
            cin >> v[i];
        }

        ll l = 0, ans = 0, p = 0;
        while(l < n){
            if(v[l] <= q){
                p++;
            }
            else{
                p = 0;
            }
            ans += max(0LL, p - k + 1);
            l++;
        }
        cout << ans << endl;
    }
    return 0;
}