#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    map <int, int> mp;

    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        mp[x]++;
    }
    int cnt = 0;

    for(auto i : mp){
        cnt = max(cnt, i.second);
    }
    cout << cnt << endl;
    return 0;
}