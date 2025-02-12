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
        string s;
        cin >> s;

        int n = (int)s.size();
        map <char, int> mp;
        int mx = 0, mn = INT_MAX, cnt = 0;

        for(char i='a'; i <= 'z'; i++){
            cnt = 0;
            mx = 0;

            for(int j=0; j<n; j++){
                if(s[j] != i){
                    cnt++;
                    mx = max(mx, cnt);
                }
                else{
                    cnt = 0;
                }
            }
            mn = min(mn, mx);
        }

        if(mn == 0){
            cout << 0 << endl;
        }
        else{
            cnt = 0;
            while(mn != 1){
                mn /= 2;
                cnt++;
            }
            cout << mn + cnt << endl;
        }
    }
    return 0;
}