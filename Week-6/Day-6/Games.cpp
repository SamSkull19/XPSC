#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector <int> a(n);
    map <int, int> mp;
    int x;

    for(int i=0; i<n; i++){
        cin >> a[i] >> x;
        mp[x]++;
    }

    int cnt = 0;
    for(int i : a){
        cnt += mp[i];
    }
    cout << cnt << endl;
    return 0;
}