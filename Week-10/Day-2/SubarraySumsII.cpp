#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    cin >> n >> x;

    vector <ll> v(n);
    map <ll, ll> mp;

    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    int l = 0;
    ll cnt = 0, sum = 0;
    mp[0] = 1;
    
    while(l < n){
        sum += v[l];
        cnt += mp[sum - x];
        mp[sum]++;
        l++;
    }

    cout << cnt << endl;
    return 0;
}