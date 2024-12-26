#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        
        vector <ll> v(n);
        ll sum = 0;
        for(int i=0; i<n; i++){
            cin >> v[i];
            sum += v[i];
        }

        ll curr = 0, mx = 0;
        for(int i=0; i<n-1; i++){
            curr += v[i];
            sum -= v[i];

            mx = max(mx, __gcd(curr, sum));
        }
        cout << mx << endl;
    }
    return 0;
}