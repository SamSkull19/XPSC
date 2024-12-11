#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        ll n;
        cin >> n;

        ll x = __lg(n);
        ll ones = 0, cnt = 0;
        bool flag = false;

        for(int i=x; i>=0; i--){
            if((n >> i) & 1){
                ones++;
                if(ones == 2){
                    flag = true;
                }
            }

            else{
                if(flag){
                    cnt++;
                }
            } 
        }
        
        ll ans = (1LL << cnt);
        cout << ans << endl;
    }
    return 0;
}