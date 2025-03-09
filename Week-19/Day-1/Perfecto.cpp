#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

bool rootCheck(ll n){
    ll x = sqrt(n);
    return x * x == n;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        ll n;
        cin >> n;

        vector <ll> v(n+2);
        for(ll i=1; i<=n; i++){
            v[i] = i;
        }

        bool flag = true;
        ll sum = 0;
        
        for(ll i=1; i<=n; i++){
            sum += i;
            if(rootCheck(sum)){
                if(i == n){
                    flag = false;
                    break;
                }
                swap(v[i], v[i+1]);
            }
        }

        if(!flag){
            cout << -1 << endl;
            continue;
        }

        for(ll i=1; i<=n; i++){
            cout << v[i] << " ";
        }
        cout << endl;
    }
    return 0;
}