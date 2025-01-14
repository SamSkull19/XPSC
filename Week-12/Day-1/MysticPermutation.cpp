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

        vector <int> v(n), x(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }

        if(n == 1){
            cout << -1 << endl;
            continue;
        }

        x = v;
        sort(x.begin(), x.end());
        for(int i=0; i<n; i++){
            if(i < n-1 && v[i] == x[i]){
                swap(x[i], x[i+1]);
            }
            if(i == n-1 && v[i] == x[i]){
                swap(x[i-1], x[i]);
            }
        }
        
        for(auto i : x){
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}