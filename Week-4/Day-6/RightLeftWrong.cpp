#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector <int> v(n);
        vector <ll> sum(n);
        
        for(int i=0; i<n; i++){
            cin >> v[i];
            if(i == 0){
                sum[i] = v[i];
            }
            else{
                sum[i] = sum[i-1] + v[i];
            }
        }
        string s;
        cin >> s;

        int l = 0, r = n-1;
        ll ans = 0;

        while(l < r){
            if(s[l] != 'L'){
                l++;
            }

            else if(s[r] != 'R'){
                r--;
            } 

            else{
                if(l > 0){
                    ans += sum[r] - sum[l-1];
                }
                else{
                    ans += sum[r] - 0;
                }
                l++;
                r--;
            }
        }
        cout << ans << endl;
    }
    return 0;
}