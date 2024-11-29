#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n, XOR = 0;
        cin >> n;

        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
            XOR ^= v[i];
        }

        int ans = XOR;
        for(int i=0; i<n; i++){
            int currXOR = (XOR ^ v[i]);
            ans = min(ans, currXOR);
        }
        cout << ans << endl;
    }
    return 0;
}