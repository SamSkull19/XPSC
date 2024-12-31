#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector <ll> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    ll ans = 0;
    map <ll, ll> mp;
    int l = 0, r = 0;

    while(r < n){
        mp[v[r]]++;
 
        if((int)mp.size() <= k){
            ans += r - l + 1;
        }

        else{
            while((int)mp.size() > k && l <= r){
                mp[v[l]]--;
                if(mp[v[l]] == 0){
                    mp.erase(v[l]);
                }
                l++;
            }

            if((int)mp.size() <= k){
                ans += r - l + 1;
            }
        }
        r++;
    }    

    cout << ans << endl;
    return 0;
}