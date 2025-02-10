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
        int n, x;
        cin >> n >> x;

        vector <int> v(n+1);
        v[0] = 0;
        for(int i=1; i<=n; i++){
            cin >> v[i];
        }

        int mx = 0;
        for(int i=1; i<=n; i++){
            int s = v[i] - v[i-1];
            mx = max(mx, s);
        }
        mx = max(mx, 2 * (x - v[n]));
        cout << mx << endl;
    }
    return 0;
}