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
        int h = (n * (n-1)) / 2;

        vector <ll> v(h);
        vector <ll> ans;

        for(int i=0; i<h; i++){
            cin >> v[i];
        }
        sort(v.begin(), v.end());

        int l = 0, r = n - 1, x = 0;
        while(l < n-1){
            ans.push_back(v[x]);
            x += r;
            r--;
            l++;
        }
        for(auto i : ans){
            cout << i << " ";
        }
        cout << 1000000000 << endl;
    }
    return 0;
}