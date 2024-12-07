#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    map <ll, ll> mp;
    for(int i=0; i<n; i++){
        ll x;
        cin >> x;
        mp[x]++;
    }

    ll cnt = 0;
    for(auto [x, y] : mp){
        if(x > y){
            cnt += y;
        }
        else if(x < y){
            cnt += y - x;
        }
    }

    cout << cnt << endl;
    return 0;
}

// https://atcoder.jp/contests/arc087/tasks/arc087_a
