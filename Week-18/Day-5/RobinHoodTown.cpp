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

        vector <ll> v(n);
        ll sum = 0;
        for(int i=0; i<n; i++){
            cin >> v[i];
            sum += v[i];
        }

        if(n <= 2){
            cout << -1 << endl;
            continue;
        }

        sort(v.begin(), v.end());
        ll idx = n / 2;
        ll x = 2 * v[idx] * n - sum + 1;

        if(x >= 0){
            cout << x << endl;
        }
        else{
            cout << 0 << endl;
        }
    }
    return 0;
}