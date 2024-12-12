#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        ll n;
        cin >> n;

        vector <ll> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }
        
        ll AND = v[0], OR = v[0];
        for(int i=1; i<n; i++){
            OR |= v[i];
            AND &= v[i];
        }
        cout << OR - AND << endl;
    }
    return 0;
}