#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        ll x, y, k;
        cin >> x >> y >> k;

        while(k > 0 && x > 1){
            ll d = y - (x % y);
            ll mn = min(k, d);

            x += mn;
            k -= mn;
            
            while(x % y == 0){
                x /= y;
            }
        }
        
        if(k == 0){
            cout << x << endl;
        }
        else{
            ll ans = x + k % (y-1);
            cout << ans << endl;
        }
    }
    return 0;
} 