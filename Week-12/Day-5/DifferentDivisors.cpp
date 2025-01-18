#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

bool is_prime(ll n){
    if(n == 1){
        return false;
    }

    for(ll i=2; i * i <= n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        ll d;
        cin >> d;

        ll a = d + 1;
        while(!is_prime(a)){
            a++;
        }
        ll b = d + a;
        while(!is_prime(b)){
            b++;
        }

        ll ans = a * b;
        cout << ans << endl;
    }
    return 0;
}