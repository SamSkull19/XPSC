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

        int ans = INT_MAX;
        for(int i = 'a'; i <= 'z'; i++){
            int cnt = 0;
            int l = 0, r = n-1;

            while(l <= r){
                if(s[l] == s[r]){
                    l++, r--;
                }

                else{
                    if(s[l] == i){
                        cnt++;
                        l++;
                    }

                    else if(s[r] == i){
                        cnt++;
                        r--;
                    }

                    else{
                        cnt = INT_MAX;
                        break;
                    }
                }
            }
            ans = min(ans, cnt);
        }   

        if(ans == INT_MAX){
            cout << -1 << endl;
        }
        else{
            cout << ans << endl;
        }
    }
    return 0;
}