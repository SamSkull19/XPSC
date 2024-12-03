#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector <ll> v(n);
        ll sum = 0, mx = 0, cnt = 0;

        for(int i=0; i<n; i++){
            cin >> v[i];
            sum += v[i];
            mx = max(mx, v[i]);

            if(sum - mx == mx){
                cnt++;
            }
        }

        cout << cnt << endl;
    }
    return 0;
}