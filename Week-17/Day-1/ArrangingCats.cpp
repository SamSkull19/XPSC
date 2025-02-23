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

        string s, f;
        cin >> s >> f;

        int cntS = 0, cntF = 0;
        for(int i=0; i<n; i++){
            if(s[i] == '1') cntS++;
            if(f[i] == '1') cntF++;
        }

        int ans = 0;
        if(cntS >= cntF){
            for(int i=0; i<n; i++){
                if(s[i] == '1' && s[i] != f[i]){
                    ans++;
                }
            }
            cout << ans << endl;
            continue;
        }
        
        for(int i=0; i<n; i++){
            if(s[i] == '1' && s[i] != f[i]){
                ans++;
            }
        }
        int x = cntF - cntS;
        cout << ans + x << endl;
    }
    return 0;
}