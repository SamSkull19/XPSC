#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n, m, q;
        cin >> n >> m >> q;

        vector <int> v(m);
        for(int i=0; i<m; i++){
            cin >> v[i];
        }
        sort(v.begin(), v.end());

        while(q--){
            int x;
            cin >> x;

            auto it = lower_bound(v.begin(), v.end(), x);
            int y = it - v.begin();

            if(y == m){
                cout << n - v[y-1] << endl;
            }
            else if(y == 0){
                cout << v[y] - 1 << endl;
            }
            else{
                cout << (v[y] - v[y - 1]) / 2 << endl;
            }
        }
    }
    return 0;
}