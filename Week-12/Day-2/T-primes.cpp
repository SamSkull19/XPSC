#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

bool is_prime(ll x){
    if(x == 1){
        return false;
    }

    for(ll i=2; i*i <= x; i++){
        if(x % i == 0){
            return false;
        }
    }
    return true;
}

bool isPerfect(ll x){
    ll r = sqrt(x);
    return (r * r) == x;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for(int i=1; i<=n; i++){
        ll x;
        cin >> x;

        if(isPerfect(x) && is_prime(sqrt(x))){
            cout << "YES" << endl;
        }

        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}