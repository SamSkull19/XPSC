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
        int n, k;
        cin >> n >> k;

        vector <pair<int, int>> v;
        vector <int> ans(n, 0);
        map <int, int> mp;
        for(int i=0; i<n; i++){
            int x;
            cin >> x;
            mp[x]++;
            if(mp[x] <= k){
                v.push_back({x, i});
            }
        }

        sort(v.begin(), v.end());
        int sz = ((int)v.size() / k) * k;

        for(int i=0; i<sz; i++){
            ans[v[i].second] = i % k + 1;
        }

        for(int i=0; i<n; i++){
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}