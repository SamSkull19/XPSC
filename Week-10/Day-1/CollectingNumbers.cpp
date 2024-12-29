#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector <int> v(n);
    map <int, int> mp;

    for(int i=0; i<n; i++){
        cin >> v[i];
        mp[v[i]] = i+1;
    }

    int cnt = 1;
    int s = -1;
    for(auto [x, y] : mp){
        if(y < s){
            cnt++;
        }
        s = y;
    }

    cout << cnt << endl;
    return 0;
}