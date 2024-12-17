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

        map <int, int> mp;
        for(int i=0; i<n; i++){
            int x;
            cin >> x;
            mp[i+1] = x;
        }
        int ans = 3;
        for(int i=0; i<n; i++){
            if(mp[mp[i+1]] == (i+1)){
                ans = 2;
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}