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

        vector <pair <int, int>> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i].first;
        }
        for(int i=0; i<n; i++){
            cin >> v[i].second;
        }

        sort(v.begin(), v.end());
        for(auto [x, y] : v){
            cout << x << " ";
        }
        cout << endl;        
        
        for(auto [x, y] : v){
            cout << y << " ";
        }
        cout << endl;
    }
    return 0;
}