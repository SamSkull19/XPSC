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
        int n, q;
        cin >> n >> q;

        vector <string> v(n + 1);
        map <string, vector<int>> mp;

        for(int i=1; i<=n; i++){
            cin >> v[i];
            mp[v[i]].push_back(i);
        }

        while(q--){
            int x, y;
            cin >> x >> y;

            if(x > y) swap(x, y);
            int ans = INT_MAX;

            for(auto i : v[x]){
                for(auto j : v[y]){
                    if(i == j){
                        ans = y - x;
                        break;
                    }
                    string s;
                    s += i;
                    s += j;

                    if(s[0] > s[1]) swap(s[0], s[1]);

                    auto mid = lower_bound(mp[s].begin(), mp[s].end(), x);
                    if(mid != mp[s].end() && *mid <= y){
                        ans = y - x;
                    }

                    auto l = mid;
                    if(l != mp[s].begin()){
                        l--;
                        ans = min(ans, (x - *l) * 2 + (y - x));
                    }

                    auto r = upper_bound(mp[s].begin(), mp[s].end(), y);
                    if(r != mp[s].end()){
                        ans = min(ans, (*r - y) * 2 + (y - x));
                    }
                }
            }

            if(ans == INT_MAX){
                cout << -1 << endl;
            }
            else{
                cout << ans << endl;
            }
        }
    }
    return 0;
}