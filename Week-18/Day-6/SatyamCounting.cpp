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

        vector <int> a(n), b(n);     
        map <int, int> mp;
        map <pair<int, int>, int> mpx;
        
        for(int i=0; i<n; i++){
            cin >> a[i] >> b[i];
            mp[a[i]]++;
            mpx[{a[i], b[i]}] = 1;
        }   

        int cnt = 0;
        for(auto [x, y] : mp){
            if(y == 2){
                cnt++;
            }
        }  

        ll ans = (1LL * cnt * (n-2));
        for(int i=0; i<n; i++){
            if(mpx[{a[i] - 1, !b[i]}] && mpx[{a[i] + 1, !b[i]}]){
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}