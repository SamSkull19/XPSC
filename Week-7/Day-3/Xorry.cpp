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

        ll x = n, cnt = 0;
        while(x > 1){
            x /= 2;
            cnt++;
        }
        ll ans = (1 << cnt);
        cout << n - ans << " " << ans << endl;
    }
    return 0;
}