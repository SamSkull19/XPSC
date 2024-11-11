#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        int cnt = 0;
        for(int i=0; i<k; i++){
            if(s[i] == 'W'){
                cnt++;
            }
        }

        int mn = cnt;
        int r = k;

        while(r < n){
            if(s[r - k] == 'W'){
                cnt--;
            }
            if(s[r] == 'W'){
                cnt++;
            }
            mn = min(mn, cnt);
            r++;
        }
        
        cout << mn << endl;
    }
    return 0;
}