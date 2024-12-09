#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, k;
    cin >> n >> m >> k;

    vector <int> v(m+1);
    for(int i=0; i<m+1; i++){
        cin >> v[i];
    }

    int ans = 0;
    for(int mk = 0; mk < m; mk++){
        int x = v[m] ^ v[mk];
        int cnt = 0;

        for(int i=0; i<n; i++){
            if((x >> i) & 1){
                cnt++;
            }
        }

        if(cnt <= k){
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}