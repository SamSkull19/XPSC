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
        ll a, b;
        cin >> a >> b;

        while(__gcd(a, b) > 1){
            b /= __gcd(a, b);
        }
        
        if(b > 1) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}