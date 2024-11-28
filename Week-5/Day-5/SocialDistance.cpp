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

        int l = 0, r = -(k+1), cnt = 0;
        while(l < n){
            if(s[l] == '0'){
                if(l - r > k){
                    cnt++;
                    s[l] = '1';
                    r = l;
                }
            }
            else{
                if(l - r <= k){
                    s[l] = '0';
                    cnt--;
                }
                r = l;
            }
            l++;
        }
        cout << cnt << endl;
    }
    return 0;
}