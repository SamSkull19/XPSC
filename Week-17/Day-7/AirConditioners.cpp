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
        ll n, k;
        cin >> n >> k;

        vector <ll> v(n, INT_MAX), a(k), b(k);
        for(int i=0; i<k; i++){
            cin >> a[i];
        }
        for(int i=0; i<k; i++){
            cin >> b[i];
        }
        for(int i=0; i<k; i++){
            v[a[i] - 1] = b[i];
        }


        vector <ll> p(n), s(n);
        ll x = INT_MAX;
        for(int i=0; i<n; i++){
            p[i] = min(x + 1, v[i]);
            x = p[i];
        }

        x = INT_MAX;
        for(int i=n-1; i>=0; i--){
            s[i] = min(x + 1, v[i]);
            x = s[i];
        }

        for(int i=0; i<n; i++){
            cout << min(p[i], s[i]) << " ";
        }
        cout << endl;
    }
    return 0;
}