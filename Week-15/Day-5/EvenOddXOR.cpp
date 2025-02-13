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

        if(n == 3){
            cout << "1 2 3" << endl;
            continue;
        }

        if(n % 4 == 0){
            ll x = (1 << 30);
            ll c = 1;

            for(ll i=1; i<=n/2; i++){
                cout << c << " " << c + x << " ";
                c++;
            }
        }
        
        else if(n % 2 == 1){
            ll a = (1 << 25);
            ll b = (1 << 26);

            cout << b << " ";
            ll c = 1;

            for(ll i=1; i<n/2; i++){
                cout << c << " " << c + a << " ";
                c++;
            }

            if((n/2) % 2 == 0){
                b += a;
            }
            cout << (n/2) << " " << (n/2) + b << " ";
        }
        
        else{
            ll a = (1 << 25);
            ll b = (1 << 26);

            cout << 0 << " " << b << " ";
            ll c = 1;

            for(ll i=1; i<=(n/2) - 2; i++){
                cout << c << " " << c + a << " ";
                c++;
            }
            cout << c << " " << c + a + b << " ";
        }

        cout << endl;
    }
    return 0;
}