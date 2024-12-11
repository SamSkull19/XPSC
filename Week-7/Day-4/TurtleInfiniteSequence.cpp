#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        ll n, m;
        cin >> n >> m;

        ll mn = max(0LL, n-m), x = n+m;
        ll ans = mn;

        while(ans < x){
            ans = (ans | ans + 1);
        }
        cout << ans << endl;
    }
    return 0;
}