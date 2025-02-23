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
        int n, k;
        cin >> n >> k;

        int mx = 0;
        vector <int> v(n + 1, 0);
        for(int i=1; i<=n; i++){
            cin >> v[i];
            mx = max(mx, v[i] - v[i-1]);
        }

        int x = (k - v[n]) * 2;
        mx = max(mx, x);
        cout << mx << endl;
    }
    return 0;
}