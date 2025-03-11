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
        cin >> n;

        vector <ll> v(2 * n);
        for(ll i=0; i<2 * n; i++){
            cin >> v[i];
        }

        sort(v.rbegin(), v.rend());
        ll sum = 0;
        for(ll i=0; i<2 * n; i++){
            sum += v[i];
        }

        ll x = sum;
        for(ll i=2; i<=2 * (n - 1); i+=2){
            x -= 2 * v[i];
        }
        
        v.insert(v.begin() + 1, x);
        for(auto i : v){
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}