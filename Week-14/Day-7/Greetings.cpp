#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define endl '\n'
#define ll long long
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector <pair <ll, ll>> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i].first >> v[i].second;
        }

        sort(v.begin(), v.end());
        pbds <ll> p;
        ll ans = 0;

        for(int i=0; i<n; i++){
            ans += i - p.order_of_key(v[i].second);
            p.insert(v[i].second);
        }
        cout << ans << endl;
    }
    return 0;
}