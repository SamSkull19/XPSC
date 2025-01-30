#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector <int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    
    sort(v.begin(), v.end());
    int l = 0, r = n-1;
    map <ll, int> mp;

    while(l < n){
        while(r > l){
            ll sum = v[l] + v[r];
            mp[sum]++;
            r--;
        }
        r = n-1;
        l++;
    }

    int mx = 0;
    for(auto [x, y] : mp){
        mx = max(mx, y);
    }
    cout << mx << endl;
    return 0;
}