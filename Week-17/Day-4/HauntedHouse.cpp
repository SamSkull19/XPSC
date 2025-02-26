#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        ll n;
        string s;
        cin >> n >> s;

        vector <ll> pos(n+1, 0);
        ll x = n-1, j = 0;

        for(ll i=n-1; i>=0; i--){
            if(s[i] == '0'){
                pos[++j] = x - i;
                pos[j] += pos[j-1];
                x--;
            }
        }

        for(ll i=1; i<=n; i++){
            if(i > j) cout << -1 << " ";
            else cout << pos[i] << " ";
        }
        cout << endl;
    }
    return 0;
}