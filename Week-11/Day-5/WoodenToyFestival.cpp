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
        int n;
        cin >> n;

        vector <int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }
        sort(v.begin(), v.end());

        auto ok = [&](int x){
            int cnt = 1, l = 0;
            for(int i=0; i<n; i++){
                if((v[i] - v[l]) > 2 * x){
                    cnt++;
                    l = i;
                }
            }
            return (cnt <= 3);
        };

        int l = 0, r = 1e9, ans, mid;
        while(l <= r){
            mid = (l + r) / 2;

            if(ok(mid)){
                ans = mid;
                r = mid - 1;
            } 
            else{
                l = mid + 1;
            }
        }

        cout << ans << endl;
    }
    return 0;
}