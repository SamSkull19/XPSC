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

    int n;
    cin >> n;

    vector <ll> v(n), l, r;
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    pbds <ll> p, q;
    for(int i=0; i<n; i++){
        ll x = i - p.order_of_key(v[i]);
        l.push_back(x);
        p.insert(v[i]);
    }
    
    for(int i=n-1; i>=0; i--){
        ll x = q.order_of_key(v[i]);
        r.push_back(x);
        q.insert(v[i]);
    }

    reverse(r.begin(), r.end());
    ll ans = 0;

    for(int i=0; i<n; i++){
        ans += (1LL * l[i] * r[i]);
    }

    cout << ans << endl;
    return 0;
}