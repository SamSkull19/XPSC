#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector <int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    auto ok = [&](ll m){
        ll cnt = 0;
        for(int i = (n / 2); i<n; i++){
            cnt += (v[i] < m ? m - v[i] : 0);
        }
        return cnt <= k;
    };

    sort(v.begin(), v.end());
    ll l = 1, r = 2e9, ans, mid;
    
    while(l <= r){
        mid = (l + r) / 2;

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