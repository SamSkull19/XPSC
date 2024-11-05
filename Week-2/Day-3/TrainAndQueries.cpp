#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        ll n, k;
        cin >> n >> k;

        vector <int> v(n);
        map <int, int> mp1, mp2;

        for(int i=0; i<n; i++){
            cin >> v[i];

            if(mp1.count(v[i]) == 0){
                mp1[v[i]] = i;
            }
            mp2[v[i]] = i;
        }
        
        for(int i=0; i<k; i++){
            int x, y;
            cin >> x >> y;

            if(mp1.count(x) > 0 && mp2.count(y) > 0 && mp1[x] < mp2[y]){
                cout << "YES" << endl;
            }
            
            else{
                cout << "NO" << endl;
            }
        }
    } 
    return 0;
}