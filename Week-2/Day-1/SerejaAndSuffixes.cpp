#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector <int> v(n);
    vector <int> cnt(n);
    set <int> s;

    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    for(int i=n-1; i>=0; i--){
        s.insert(v[i]);
        cnt[i] = s.size();
    }

    for(int i=0; i<m; i++){
        int l;
        cin >> l;
        cout << cnt[l-1] << endl;
    }
    return 0;
}