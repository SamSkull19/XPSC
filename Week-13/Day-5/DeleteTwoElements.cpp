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
        int n;
        cin >> n;

        vector <int> v(n);
        ll sum = 0;
        for(int i=0; i<n; i++){
            cin >> v[i];
            sum += v[i];
        }

        if((2 * sum) % n != 0){
            cout << 0 << endl;
            continue;
        }

        int r = 2 * sum / n;
        map <ll, ll> mp;
        ll ans = 0;

        for(int i : v){
            ans += mp[r - i];
            mp[i]++;
        }
        cout << ans << endl;
    }
    return 0;
}