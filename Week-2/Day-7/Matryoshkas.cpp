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

        map <int, int> mp;
        set <int> s;

        for(int i=1; i<=n; i++){
            int x;
            cin >> x;
            mp[x]++;
            s.insert(x);
            s.insert(x + 1);
        }

        int cnt = 0, a = 0;

        for(auto i : s){
            int c = mp[i];
            cnt += max(0, c - a);
            a = c;
        }
        cout << cnt << endl;
    }
    return 0;   
}