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
        multiset <int> ml;

        for(int i=0; i<n; i++){
            cin >> v[i];
            ml.insert(v[i]);
        }

        auto ok = [&](int k){
            multiset <int> m = ml;

            for(int i=1; i<=k; i++){
                if(m.empty()){ 
                    return false;
                }

                int x = k - i + 1;
                auto it = m.upper_bound(x);

                if(it == m.begin()){
                    return false;
                }
                m.erase(--it);

                if(!m.empty()){
                    int s = *m.begin();
                    m.erase(m.begin());
                    m.insert(s + x);
                }
            }
            return true;
        };

        int l = 0, r = n, mid, ans;
        while(l <= r){
            mid = (l + r) / 2;

            if(ok(mid)){
                ans = mid;
                l = mid + 1;
            }

            else{
                r = mid - 1;
            }
        }
        
        cout << ans << endl;
    }
    return 0;
}