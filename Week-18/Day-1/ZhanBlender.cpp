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
        ll n, x, y;
        cin >> n >> x >> y;

        ll s = n;
        if(n % min(x, y) != 0){
            s += min(x, y);
        }
        ll ans = s / min(x, y);
        cout << ans << endl;
    }
    return 0;
}