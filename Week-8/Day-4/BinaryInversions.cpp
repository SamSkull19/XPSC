#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll inversionCNT(vector <int> v, int n){
    ll ans = 0, one = 0;
    for(int i=0; i<n; i++){
        if(v[i] == 1){
            one++;
        }
        else{
            ans += one;
        }
    }
    return ans;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        
        vector <int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }

        ll ans = inversionCNT(v, n);
        int idx = -1;
        for(int i=0; i<n; i++){
            if(v[i] == 0){
                v[i] = 1;
                idx = i;
                break;
            }
        }

        ans = max(ans, inversionCNT(v, n));
        if(idx != -1){
            v[idx] = 0;
        }

        for(int i=n-1; i>=0; i--){
            if(v[i] == 1){
                v[i] = 0;
                break;
            }
        }

        ans = max(ans, inversionCNT(v, n));
        cout << ans << endl;
    }
    return 0;
}