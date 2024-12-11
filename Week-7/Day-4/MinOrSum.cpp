#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        ll ans = 0;
        for(int i=0; i<n; i++){
            int x;
            cin >> x;
            ans = (ans | x);
        }
        cout << ans << endl;
    }
    return 0;
}