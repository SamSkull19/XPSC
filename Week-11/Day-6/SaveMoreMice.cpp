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
        ll n, k;
        cin >> n >> k;

        vector <ll> v(k);
        for(int i=0; i<k; i++){
            cin >> v[i];
        }

        sort(v.rbegin(), v.rend());
        ll x = 0, ans = 0;

        for(int i=0; i<k; i++){
            if(v[i] > x){
                x += n - v[i];
                ans++;
            }
            else{
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}