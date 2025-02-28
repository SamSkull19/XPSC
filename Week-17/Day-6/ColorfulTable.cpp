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

        vector <pair<int, int>> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i].first;
            v[i].second = i + 1;
        }

        sort(v.rbegin(), v.rend());
        int mxx = 0, mnn = INT_MAX;
        vector <int> mx(n), mn(n);

        for(int i=0; i<n; i++){
            mnn = min(mnn, v[i].second);
            mn[i] = mnn;
            mxx = max(mxx, v[i].second);
            mx[i] = mxx;
        }

        map <int, int> mp;
        for(int i=0; i<n; i++){
            mp[v[i].first] = (mx[i] - mn[i] + 1) * 2;
        }

        for(int i=1; i<=k; i++){
            cout << mp[i] << " ";
        }
        cout << endl;
    }
    return 0;
}