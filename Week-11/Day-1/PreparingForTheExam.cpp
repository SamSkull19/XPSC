#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n, m, k;
        cin >> n >> m >> k;

        vector <int> v(m);
        for(int i=0; i<m; i++){
            cin >> v[i];
        }      

        map <int, int> mp;
        for(int i=0; i<k; i++){
            int x;
            cin >> x;
            mp[x] = 1;
        }

        string s;
        for(int x : v){
            if(k - mp[x] < n-1){
                s += '0';
            }
            else{
                s += '1';
            }
        }
        cout << s << endl;
    }
    return 0;
}