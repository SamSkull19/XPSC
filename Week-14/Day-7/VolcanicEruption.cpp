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
        ll n, p;
        cin >> n >> p;

        vector <ll> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }

        vector <ll> l(n), r(n);
        ll h = 1e9;
        for(int i=0; i<n; i++){
            if(v[i] == 0){
                h = 0;
                l[i] = 0;
            }
            else if(v[i] < h){
                l[i] = h;
            }
            else{
                l[i] = v[i];
                h = v[i];
            }
        }
        
        for(int i=n-1; i>=0; i--){
            if(v[i] == 0){
                h = 0;
                r[i] = 0;
            }
            else if(v[i] < h){
                r[i] = h;
            }
            else{
                r[i] = v[i];
                h = v[i];
            }
        }

        ll mn = LLONG_MAX;
        for(int i=0; i<n; i++){
            mn = min(l[i], r[i]);

            cout << (mn + p - 1) / p << " ";
        }
        cout << endl;
    }
    return 0;
}