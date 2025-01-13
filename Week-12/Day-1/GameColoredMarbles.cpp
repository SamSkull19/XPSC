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
        map <int, int> mp;

        for(int i=0; i<n; i++){
            cin >> v[i];
            mp[v[i]]++;
        }

        int one = 0, s = 0;
        for(auto [x, y] : mp){
            if(y == 1){
                one++;
            }
            else{
                s++;
            }
        }

        int sc = (one % 2 == 0 ? one / 2 : one / 2 + 1) * 2;
        sc += s;
        cout << sc << endl;
    }
    return 0;
}