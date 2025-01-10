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

        auto ok = [&](ll x){
            return (x - (x / n)) >= k;
        };

        ll l = 1, r = 2e9, ans, mid;
        while(l <= r){
            mid = (l + r) / 2;

            if(ok(mid)){
                ans = mid;
                r = mid - 1;
            } 
            else{
                l = mid + 1;
            }
        }

        cout << ans << endl;
    }
    return 0;
}