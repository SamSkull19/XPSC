#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        ll n, k;
        cin >> n >> k;

        vector <int> v;
        vector <int> tmp;

        for(int i=0; i<n; i++){
            ll a;
            cin >> a;
            v.push_back(a);
        }

        tmp = v;
        sort(tmp.begin(), tmp.end());
        ll m = n;

        for(ll i=0; i<n; i++){
            if(tmp[i] != i){
                m = i;
                break;
            }
        }

        ll b;

        for(ll i=0; i<n; i++){
            b = v[i];
            v[i] = m;
            m = b;
        }
        v.push_back(m);

        ll l = (k-1) % (n+1);
        for(ll i=(n+1 - l); i<n+1; i++){
            cout << v[i] << " ";
        }
        
        for(ll i=0; i<n - l; i++){
            cout << v[i] << " ";
        }
        cout << endl;
    }
    return 0;
}