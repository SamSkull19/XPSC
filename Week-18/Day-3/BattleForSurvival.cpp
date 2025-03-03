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
        int n;
        cin >> n;

        vector <int> v(n);
        ll sum = 0;
        for(int i=0; i<n; i++){
            cin >> v[i];
            sum += v[i];
        }

        ll x = v[n-2] + v[n-3];
        ll d = v[n-2] - v[n-3];
        ll ans = sum - x - d;
        cout << ans << endl;
    }
    return 0;
}