#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        ll mx = INT_MIN;
        map <ll, ll> mp;
        for(int i=1; i<=n; i++){
            int x;
            cin >> x;
            mp[x]++;
            mx = max(mx, mp[x]);
        }
        ll r = n - mx, cnt = 0;
        while(mx < n){
            cnt++;
            mx *= 2;
        }
        cout << cnt + r << endl;
    }
    return 0;
}