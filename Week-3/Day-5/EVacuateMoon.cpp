#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n, m, h;
        cin >> n >> m >> h;

        vector <ll> a(n);
        vector <ll> b(m);

        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        for(int i=0; i<m; i++){
            cin >> b[i];
        }

        sort(a.rbegin(), a.rend());
        sort(b.rbegin(), b.rend());

        ll total = 0;

        int l=0, r=0; 

        while(l < n && r < m){
            ll s = b[r] * h;
            total += min(s, a[l]);
            l++, r++;
        }
        cout << total << endl;
    }
    return 0;
}