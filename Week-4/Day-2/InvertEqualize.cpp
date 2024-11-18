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

        int l =0, cnt0 = 0, cnt1 = 0;

        while(l < n){
            if(s[l] == '0'){
                while(s[l] == '0'){
                    l++;
                }
                cnt0++;
            }
            
            if(s[l] == '1'){
                while(s[l] == '1'){
                    l++;
                }
                cnt1++;
            }
        }
        int mn = min(cnt0, cnt1);
        cout << mn << endl;
    }
    return 0;
}