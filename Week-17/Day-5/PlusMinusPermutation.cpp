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
        ll n, x, y;
        cin >> n >> x >> y;
        
        ll s = n / ((x / __gcd(x, y)) * y);
        ll a = n - n / x + s;
        ll b = n / y - s;

        ll sum = (n * (n + 1) - a * (a + 1) - b * (b + 1)) / 2;
        cout << sum << endl;
    }
    return 0;
}