#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector <int> v(n);
        map <int, int> mp;

        for(int i=0; i<n; i++){
            cin >> v[i];
            mp[v[i]] = i+1;
        }

        int mx = -1;
        for(auto [i, j] : mp){
            for(auto [x, y] : mp){
                if(__gcd(i, x) == 1){
                    mx = max(mx, j+y);
                }
            }
        }
        cout << mx << endl;
    }
    return 0;
} 