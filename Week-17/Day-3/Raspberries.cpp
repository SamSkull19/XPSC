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
        cin >> n >> k;

        vector <int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }

        int cnt = 0;
        int mn = INT_MAX;
        for(auto x : v){
            if(x % k == 0){
                mn = 0;
            }
            if(x % 2 == 0){
                cnt++;
            }
            mn = min(mn, k - (x % k));
        }

        if(k == 4){
            if(cnt >= 2) mn = 0;
            else if(cnt == 1) mn = min(mn, 1);
            else mn = min(mn, 2);
        }
        cout << mn << endl;
    }
    return 0;
}