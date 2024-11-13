#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        ll n;
        cin >> n;

        vector <ll> v(n);
        map <ll, ll> mp;

        for(int i=0; i<n; i++){
            cin >> v[i];

            if(v[i] != 0){
                mp[v[i]]++;
            }
        }

        if(mp.size() == 1 || mp.size() == 0){
            cout << "YES" << endl;
        }

        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}