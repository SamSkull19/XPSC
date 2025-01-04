#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n, q;
        cin >> n >> q;

        vector <ll> v(n + 1, 0);
        vector <ll> pref(n + 2, 0);
        for(int i=1; i<=n; i++){
            cin >> v[i];
        }

        for(int i=1; i<=n; i++){
            pref[i] = pref[i-1] + v[i];
        }

        vector <pair<ll, int>> k(q);
        vector <ll> ans(q);

        for(int i=0; i<q; i++){
            cin >> k[i].first;
            k[i].second = i;
        }

        sort(k.begin(), k.end());
        int x = 0;

        for(int i=0; i<q; i++){
            while(1){
                if(x == n || v[x + 1] > k[i].first){
                    break;
                }
                x++;
            }
            ans[k[i].second] = pref[x];
        }

        for(auto i : ans){
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}