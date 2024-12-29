#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector <ll> v(n);
    ll sum = 0;
    for(int i=0; i<n; i++){
        cin >> v[i];
        sum += v[i];
    }

    ll mn = LLONG_MAX;
    for(int mask = 0; mask < (1 << n); mask++){
        ll x = 0;
        
        for(int k=0; k<n; k++){
            if((mask >> k) & 1){
                x += v[k];
            }
        }

        ll d = sum - x;
        mn = min(mn, abs(d - x));
    }

    cout << mn << endl;
    return 0;
}