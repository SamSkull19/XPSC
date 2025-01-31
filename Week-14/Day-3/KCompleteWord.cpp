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
        string s;
        cin >> n >> k >> s;

        int ans = 0;
        for(int i=0; i<k/2; i++){
            map <char, int> mp;
            for(int j=0; j+k-1 < n; j += k){
                int a = j + i;
                int b = j + (k - i - 1);

                mp[s[a]]++;
                mp[s[b]]++;
            }

            int s = 2 * (n / k);
            int mx = 0;
            for(auto [x, y] : mp){
                mx = max(mx, y);
            }

            ans += s - mx;
        }

        if(k % 2 == 1){
            map <char, int> mp;
            for(int i = k / 2; i < n; i += k){
                mp[s[i]]++;
            }

            int s = n / k;
            int mx = 0;
            for(auto [x, y] : mp){
                mx = max(mx, y);
            }

            ans += s - mx;
        }

        cout << ans << endl;
    }
    return 0;
}