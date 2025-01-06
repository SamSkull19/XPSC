#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        ll n, k;
        cin >> n >> k;

        vector <pair <ll, ll>> a(n), ans(n);
        vector <ll> b(n);
        for(ll i=0; i<n; i++){
            cin >> a[i].first;
            a[i].second = i+1;
        }

        for(ll i=0; i<n; i++){
            cin >> b[i];
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        for(ll i=0; i<n; i++){
            ans[i].first = a[i].second;
            ans[i].second = b[i];
        }
        sort(ans.begin(), ans.end());

        for(auto [x, y] : ans){
            cout << y << " ";
        }
        cout << endl;
    }
    return 0;
}