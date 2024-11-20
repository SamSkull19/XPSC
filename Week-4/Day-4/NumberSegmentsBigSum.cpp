#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    ll s;
    cin >> n >> s;

    vector <ll> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    int l = 0, r = 0;
    ll sum = 0, ans = 0;

    while(r < n){
        sum += v[r];
        
        while(sum >= s && l <= r){
            ans += (n - r);
            sum -= v[l];
            l++;
        }
        r++;
    }
    cout << ans << endl;
    return 0;
}