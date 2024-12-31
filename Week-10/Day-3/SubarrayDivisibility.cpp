#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector <ll> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    ll cnt = 0, sum = 0;
    map <ll, ll> mp;
    mp[0] = 1;
    int l = 0;

    while(l < n){
        sum += v[l];
        ll x = ((sum % n) + n) % n;
        cnt += mp[x];
        mp[x]++;
        l++;
    }    

    cout << cnt << endl;
    return 0;
}