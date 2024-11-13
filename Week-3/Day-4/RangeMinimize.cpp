#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        ll n;
        cin >> n;

        vector <ll> v(n);

        for(int i=0; i<n; i++){
            cin >> v[i];
        }

        sort(v.begin(), v.end());
        
        ll l = 0, r = n-1, mn = INT_MAX;

        mn = min(mn, (v[r] - v[l+2]));
        mn = min(mn, (v[r-2] - v[l]));
        mn = min(mn, (v[r-1] - v[l+1]));

        cout << mn << endl;
    }
    return 0;
}