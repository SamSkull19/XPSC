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

        int mx = 0, mn = INT_MAX;
        set <int> s;
        for(int i=1; i<=n; i++){
            int a, x;
            cin >> a >> x;

            if(a == 1){
                mx = max(mx, x);
            }
            if(a == 2){
                mn = min(mn, x);
            }
            if(a == 3){
                s.insert(x);
            }
        }

        if(mx > mn){
            cout << 0 << endl;
            continue;
        }
        
        int cnt = 0;
        for(auto i : s){
            if(i >= mx && i <= mn){
                cnt++;
            }
        }

        int ans = (mn - mx) + 1 - cnt;
        cout << ans << endl;
    }
    return 0;
}