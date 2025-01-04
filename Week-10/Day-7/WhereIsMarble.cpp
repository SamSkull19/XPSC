#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int cnt = 1;
    while(1){
        int n, q;
        cin >> n >> q;
        if(n == 0 && q == 0) break;
    
        vector <int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }

        sort(v.begin(), v.end());
        cout << "CASE# " << cnt << ":" << endl;
        cnt++;

        for(int i=0; i<q; i++){
            int x, l = 0, r = n-1, mid;
            cin >> x;

            int ans = -1;
            while(l <= r){
                mid = (l + r) / 2;
                if(x <= v[mid]){
                    ans = mid;
                    r = mid - 1;
                }
                else{
                    l = mid + 1;
                }
            }

            if(ans != -1 && v[ans] == x){ 
                cout << x << " found at " << ans + 1 << endl;
            }
            else{ 
                cout << x << " not found" << endl;
            }
        }
    }
    return 0;
}