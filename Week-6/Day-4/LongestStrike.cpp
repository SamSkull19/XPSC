#include<bits/stdc++.h>
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

        vector <ll> v(n);
        map <ll, int> mp;

        for(int i=0; i<n; i++){
            cin >> v[i];
            mp[v[i]]++;
        }

        sort(v.begin(), v.end());
        int mxL = -1, mxR = -1;
        int l = 0, i = 0;

        for(int i=0; i<n; i++){
            if(mp[v[i]] < k){
                continue;
            }

            if(l == 0){
                l = v[i];
            }

            if(i == n-1 || v[i+1] - v[i] > 1 || mp[v[i+1]] < k){
                int r = v[i];
                if(mxR - mxL <= r - l){
                    mxL = l;
                    mxR = r;
                }
                l = 0;
            }
        }

        if(mxL == -1){
            cout << -1 << endl;
        }
        else{
            cout << mxL << " " << mxR << endl;
        }
    }
    return 0;
}