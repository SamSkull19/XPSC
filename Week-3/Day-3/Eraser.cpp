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

        int r = 0;
        int cnt = 0;

        while(r < n){
            if(s[r] == 'B'){
                cnt++;
                r += k-1;
            }
            r++;
        }
        cout << cnt << endl;
    }
    return 0;
}