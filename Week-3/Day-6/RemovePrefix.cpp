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
        for(int i=0; i<n; i++){
            cin >> v[i];
        }
        
        reverse(v.rbegin(), v.rend());
        map <int, int> mp;
        int l=0;

        while(l < n){
            mp[v[l]]++;
            if(mp[v[l]] > 1){
                break;
            }
            l++;
        }
        cout << n - l << endl;
    }
    return 0;
}