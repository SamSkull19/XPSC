#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        ll n;
        cin >> n;

        vector <string> v;
        map <string, ll> mp;

        for(int i=0; i<n; i++){
            string s;
            cin >> s;

            mp[s]++;
            if(mp[s] == 1){
                v.push_back(s);
            }
        }

        ll x = (int)v.size();
        ll ans = 0;

        for(int i=0; i<x; i++){
            for(int j=i+1; j<x; j++){
                if(v[i][0] == v[j][0] || v[i][1] == v[j][1]){
                    ans += mp[v[i]] * mp[v[j]];
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}