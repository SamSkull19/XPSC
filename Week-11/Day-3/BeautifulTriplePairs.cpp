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

        vector <int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }

        map <pair <int, int>, int> mp1, mp2, mp3;
        map <vector <int>, int> mp;
        ll ans = 0;

        for(int i=0; i<n-2; i++){
            int a = v[i];
            int b = v[i+1];
            int c = v[i+2];

            ans += mp1[{a, b}]++;
            ans += mp2[{b, c}]++;
            ans += mp3[{c, a}]++;

            vector <int> x = {a, b, c};
            ans -= 3 * mp[x]++;
        }
        cout << ans << endl;
    }
    return 0;
}