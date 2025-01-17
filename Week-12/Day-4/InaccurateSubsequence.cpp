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
        int n, m, k;
        cin >> n >> m >> k;

        vector <int> a(n), b(m);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        map <int, int> mp;
        for(int i=0; i<m; i++){
            cin >> b[i];
            mp[b[i]]++;
        }

        int l = 0, r = 0, ans = 0;
        map <int, int> mp1;
        int cnt = 0;

        while(r < n){
            while(r - l + 1 <= m){
                mp1[a[r]]++;
                if(mp1[a[r]] <= mp[a[r]]){
                    cnt++;
                }
                r++;
            }
            if(cnt >= k){
                ans++;
            }
            if(mp1[a[l]] <= mp[a[l]]){
                cnt--;
            }
            mp1[a[l]]--;
            l++;
        }
        cout << ans << endl;
    }
    return 0;
}