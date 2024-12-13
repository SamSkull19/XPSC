#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n;
        string s;
        cin >> n >> s;

        int same = 0, diff = 0;
        int l = 0, r = n-1;

        while(l < r){
            if(s[l] == s[r]){
                same += 2;
            }
            else{
                diff++;
            }
            l++, r--;
        }

        string ans;
        for(int i=0; i<=n; i++){
            int x = i;
            x -= diff;

            if(x < 0){
                ans += '0';
                continue;
            }

            x = max((x % 2), (x - same));
            x = max(0, x - (n % 2));

            if(x == 0){
                ans += '1';
            }
            else{
                ans += '0';
            }
        }
        cout << ans << endl;
    }
    return 0;
}