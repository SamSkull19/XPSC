#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;

    ll x = n / a;
    ll y = n / b;

    ll LCM = (a / __gcd(a, b)) * b;
    ll z = n / LCM;

    x = (x - z) * p;
    y = (y - z) * q;
    z = z * max(p, q);

    cout << x + y + z << endl;
    return 0;
}