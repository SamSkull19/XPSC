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
        ll n;
        cin >> n;

        ll curr = 0, ans = 20;
        for(int i=1; i<=10; i++){
            ll x = n, mv = 0;
            curr *= 10;
            curr += 9;

            for(int j=1; j<=10; j++){
                ll temp = x, flag = 0;

                while(temp){
                    ll r = temp % 10;
                    if(r == 7){
                        flag = true;
                        break;
                    }
                    temp /= 10;
                }

                if(flag) ans = min(ans, mv);
                x += curr;
                mv++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}