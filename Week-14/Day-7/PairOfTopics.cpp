#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define endl '\n'
#define ll long long
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector <ll> a(n), b(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }    
    for(int i=0; i<n; i++){
        cin >> b[i];
    }

    vector <ll> c(n);
    for(int i=0; i<n; i++){
        c[i] = a[i] - b[i];
    }
    
    sort(c.begin(), c.end());
    pbds <ll> p;
    ll ans = 0;
    
    for(int i=n-1; i>0; i--){
        p.insert(-c[i]);
        ans += p.order_of_key(c[i-1]);
    }

    cout << ans << endl;
    return 0;
}