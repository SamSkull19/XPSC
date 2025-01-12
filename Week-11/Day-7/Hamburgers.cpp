#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    ll a, b, c, x, y, z, n;
    cin >> a >> b >> c >> x >> y >> z >> n;

    int cntB = 0, cntS = 0, cntC = 0;
    for(char i : s){
        if(i == 'B') cntB++;
        if(i == 'S') cntS++;
        if(i == 'C') cntC++;
    }

    auto ok = [&](ll m){
        ll nb = m * cntB;
        ll ns = m * cntS;
        ll nc = m * cntC;

        ll s = 0;
        s += max(0LL, nb - a) * x;
        s += max(0LL, ns - b) * y;
        s += max(0LL, nc - c) * z;

        return s <= n;
    };

    ll l = 0, r = 1e15, ans, mid;
    while(l <= r){
        mid = l + (r - l) / 2;

        if(ok(mid)){
            ans = mid;
            l = mid + 1;
        }
        else{
            r = mid - 1;
        }
    }
    cout << ans << endl;
    return 0;
}