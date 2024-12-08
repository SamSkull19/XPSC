#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mxBit = 30;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        ll n, K;
        cin >> n >> K;
        
        vector <ll> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }

        vector <ll> bits(mxBit + 1);

        for(int i=0; i<n; i++){
            for(int k= mxBit; k >= 0; k--){
                if((v[i] >> k) & 1){
                    bits[k]++;
                }
            }
        }

        ll ans = 0;
        for(int k = mxBit; k >= 0; k--){
            if(bits[k] == n){
                ans += (1LL << k);
            }

            else{
                ll need = n - bits[k];
                if(K >= need){
                    ans += (1LL << k);
                    K -= need;
                }
            }
        }

        cout << ans << endl;
    }
    return 0;
}