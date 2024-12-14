#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        ll b, c, d;
        cin >> b >> c >> d;

        ll a = d ^ c;
        ll x = (a | b) - (a & c);

        if(x == d){
            cout << a << endl;
        }
        else{
            cout << -1 << endl;
        }
    }
    return 0;
}