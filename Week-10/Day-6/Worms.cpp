#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector <int> v(n);
    vector <int> pref(n);
    
    for(int i=0; i<n; i++){
        cin >> v[i];
    }

    for(int i=0; i<n; i++){
        if(i == 0){ 
            pref[i] = v[i];
        }
        else{
            pref[i] = pref[i-1] + v[i];
        }
    }

    int q;
    cin >> q;   

    while(q--){
        int x;
        cin >> x;
        
        int l = 0, r = n-1, mid;
        int ans = -1;

        while(l <= r){
            mid = (l + r) / 2;

            if(x <= pref[mid]){
                ans = mid;
                r = mid - 1;
            }

            else{
                l = mid + 1;
            }
        }
        cout << ans + 1 << endl;
    }

    return 0;
}