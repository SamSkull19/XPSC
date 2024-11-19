#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    ll k;
    cin >> n >> k;

    vector <ll> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    int l = 0, r = 0;
    ll ans = 0;
    multiset <ll> ml;

    while(r < n){
        ml.insert(v[r]);
        ll mn = *ml.begin();
        ll mx = *ml.rbegin();

        if(mx - mn <= k){
            ans += (r - l + 1);
        }

        else{
            while(l <= r){
                mn = *ml.begin(); 
                mx = *ml.rbegin();

                if(mx - mn <= k){
                    break;
                }

                ml.erase(ml.find(v[l]));
                l++;
            }
            mn = *ml.begin();
            mx = *ml.rbegin();

            if(mx - mn <= k){
                ans += (r - l + 1);
            }
        }
        r++;
    }
    
    cout << ans << endl;
    return 0;
}