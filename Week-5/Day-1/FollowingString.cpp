#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector <int> v(n);
        vector <int> cnt(n+5, 0);
        string s;

        for(int i=0; i<n; i++){
            cin >> v[i];
            char c = 'a' + cnt[v[i]];
            s += c;
            cnt[v[i]]++;
        }
        cout << s << endl;
    }
    return 0;
}