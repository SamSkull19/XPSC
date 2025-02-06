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

        vector <int> v(n);
        int mn = INT_MAX;
        for(int i=0; i<n; i++){
            cin >> v[i];
            mn = min(mn, v[i]);
        }

        ll ans = 1;
        bool flag = true;
        for(auto x : v){
            if(flag && x == mn){
                x++;
                flag = false; 
            }
            ans *= (1LL * x);
        }
        cout << ans << endl;
    }
    return 0;
}