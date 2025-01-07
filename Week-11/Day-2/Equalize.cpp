#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        set <int> s;
        for(int i=0; i<n; i++){
            int x;
            cin >> x;
            s.insert(x);
        }

        vector <int> v;
        for(auto x : s){
            v.push_back(x);
        }

        int l = 0, r = 0;
        int cnt = 0, len = (int)v.size();

        while(r < len){
            ll d = v[r] - v[l];

            while(d >= n && l <= r){
                l++;
                d = v[r] - v[l];
            }
            
            cnt = max(cnt, r - l + 1);
            r++;
        }
        cout << cnt << endl;
    }
    return 0;
}