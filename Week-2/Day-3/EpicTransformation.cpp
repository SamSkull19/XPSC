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
        map <int, int> mp;
        int mx = 0;

        for(int i=0; i<n; i++){
            cin >> v[i];
            mp[v[i]]++;
            mx = max(mx, mp[v[i]]);
        }

        int r = n - mx;
        int m = n % 2;

        if(mx > r){
            cout << mx - r << endl;
        }

        else{
            cout << m << endl;
        }

    }
    return 0;
}