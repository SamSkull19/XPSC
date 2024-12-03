#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector <int> v(n);
        vector <int> a;
        for(int i=0; i<n; i++){
            cin >> v[i];
            a.push_back(abs((i+1) - v[i]));
        }
        int ans = 0;
        for(int i : a){
            ans = __gcd(ans, i);
        }
        cout << ans << endl;
    }
    return 0;
}