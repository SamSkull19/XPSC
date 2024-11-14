#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    map <string, int> mp;
    map <int, string> revMp;

    for(int i=1; i<=n; i++){
        string s;
        cin >> s;
        mp[s] = i;
    }

    for(auto [x, y] : mp){
        revMp[-y] = x;
    }

    for(auto [x, y] : revMp){
        int sz = (int)y.size();
        cout << y[sz-2] << y[sz-1];
    }
    return 0;
}