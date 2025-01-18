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

        vector <ll> v(n);
        map <ll, ll> mp;
        for(int i=0; i<n; i++){
            cin >> v[i];
            if(v[i] <= n){
                mp[v[i]]++;
            }
        }

        vector <ll> freq(n + 1, 0);
        for(auto [x, y] : mp){
            for(int i=x; i<=n; i+=x){
                freq[i] += y;
            }
        }
        
        ll mx = 0;
        for(auto x : freq){
            mx = max(mx, x);
        }
        cout << mx << endl;
    }
    return 0;
}