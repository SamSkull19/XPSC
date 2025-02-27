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
        ll n, x, k;
        cin >> n >> x >> k;

        string s;
        cin >> s;

        ll pos = x, cnt = 0;
        for(int i=0; i<n; i++){
            if(s[i] == 'L') pos--;
            if(s[i] == 'R') pos++;
            if(pos == 0){
                cnt = i + 1;
                break;
            }
        }

        ll cyc = 0;
        if(n != 1){
            ll m = 0;
            for(int i=0; i<n; i++){
                if(s[i] == 'L') m--;
                if(s[i] == 'R') m++;

                if(m == 0){
                    cyc = i + 1;;
                    break;
                }
            }
        }

        ll ans = 0;
        if(cnt != 0){
            k -= cnt;
            ans = 1;
            if(cyc){
                ans += k / cyc;
            }
            cout << ans << endl;
            continue;
        }

        cout << 0 << endl;
    }
    return 0;
}