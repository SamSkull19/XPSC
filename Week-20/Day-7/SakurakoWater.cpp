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

        map <int, int> mp;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                int x;
                cin >> x;
                if(x < 0) mp[j - i + n] = min(mp[j - i + n], x);
            }
        }

        int ans = 0;
        for(auto [x, y] : mp){
            ans += (-y);
        }
        cout << ans << endl;
    }
    return 0;
}