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
        int m;
        cin >> m;

        vector <int> v(m);
        for(int i=0; i<m; i++){
            cin >> v[i];
        }

        int ans = 0;
        bool flag = true;

        for(int i=1; i<=m; i*=2){
            vector <int> x;
            
            for(int j=1; j<v.size(); j+=2){
                if(v[j-1] > v[j]){
                    swap(v[j-1], v[j]);
                    ans++;
                }

                if(v[j] - v[j-1] != i){
                    flag = false;
                    break;
                }
                x.push_back(v[j]);
            }

            v = x;
            if(!flag){
                break;
            }
        }

        if(!flag) cout << -1 << endl;
        else cout << ans << endl;
    }
    return 0;
}