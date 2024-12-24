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

        vector <ll> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }

        ll G1 = 0, G2 = 0;
        for(int i=0; i<n; i++){
            if(!(i % 2)) G1 = __gcd(G1, v[i]);
            if(i % 2) G2 = __gcd(G2, v[i]);
        }
        
        bool flag1 = true;
        for(int i=0; i<n; i+=2){
            if(!(v[i] % G2)){
                flag1 = false;
            }
        }

        bool flag2 = true;
        for(int i=1; i<n; i+=2){
            if(!(v[i] % G1)){
                flag2 = false;
            }
        }

        ll ans = 0;
        if(flag1){
            ans = G2;
        }

        else if(flag2){
            ans = G1;
        }
        
        cout << ans << endl;
    }
    return 0;
}