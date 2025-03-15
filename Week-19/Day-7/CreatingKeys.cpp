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
        ll n, x;
        cin >> n >> x;

        vector <ll> v(n);
        ll s = 0;
        for(int i=0; i<n; i++){
            if((i | x) != x){
                break;
            }
            s |= i;
            v[i] = i;
        }

        if(s != x){
            v[n-1] = x;
        }

        for(auto i : v){
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}