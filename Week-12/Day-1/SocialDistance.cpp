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
        int n, m;
        cin >> n >> m;

        vector <int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }

        if(n >= m){
            cout << "NO" << endl;
            continue;
        }
        sort(v.rbegin(), v.rend());

        ll s = 0;
        for(int i=0; i<n; i++){
            if(i == n-1){
                s += v[0] + 1;
            }
            else{
                s += v[i] + 1;
            }
        }

        if(s > m){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
    return 0;
}