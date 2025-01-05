#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    ll l;
    cin >> n >> l;

    vector <ll> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    sort(v.begin(), v.end());
    ll x = 2 * max(v[0], l - v[n-1]);

    for(int i=1; i<n; i++){
        x = max(x, v[i] - v[i-1]);
    }
    cout << fixed << setprecision(9) << (double)x / 2 << endl;
    return 0;
}