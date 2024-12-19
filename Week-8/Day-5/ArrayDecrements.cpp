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

        vector <int> a(n);
        vector <int> b(n);

        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        for(int i=0; i<n; i++){
            cin >> b[i];
        }

        int mx = 0, mn = INT_MAX;
        for(int i=0; i<n; i++){
            if(b[i] > 0){
                int x = a[i] - b[i];
                mx = max(mx, x);
                mn = min(mn, x);
            }
            else{
                mx = max(mx, a[i]);
            }
        }

        if(mx <= mn){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}