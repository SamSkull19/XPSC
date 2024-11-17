#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        ll a, b, n, sum = 0;
        cin >> a >> b >> n;

        vector <ll> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }
        sort(v.rbegin(), v.rend());

        for(int i=0; i<n; i++){
            sum += b - 1;
            b -= b - 1;
            b += v[i];
            b = min(b, a);
            if(b == 0){
                break;
            }  
        }

        if(b > 0){
            sum += b;
        }
        cout << sum << endl;
    }
    return 0;
}