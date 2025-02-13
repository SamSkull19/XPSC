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
        int n, c, q;
        cin >> n >> c >> q;

        string s;
        cin >> s;

        vector <ll> left(c+1), right(c+1), diff(c+1);
        left[0] = 0;
        right[0] = n;

        for(int i=1; i<=c; i++){
            ll l, r;
            cin >> l >> r;
            l--, r--;

            left[i] = right[i-1];
            right[i] = left[i] + (r - l + 1);
            diff[i] = left[i] - l;
        }

        while(q--){
            ll k;
            cin >> k;
            k--;

            for(int i=c; i>=0; i--){
                if(k >= left[i]){
                    k -= diff[i];
                }
            }
            cout << s[k] << endl;
        }
    }
    return 0;
}