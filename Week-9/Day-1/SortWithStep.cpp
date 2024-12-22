#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n, k;
        cin >> n >> k;

        vector <int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }

        int cnt = 0;
        for(int i=0; i<n; i++){
            int x = abs(v[i] - (i+1));
            if(x % k){
                cnt++;
            }
        }

        if(cnt > 2){
            cout << -1 << endl;
        }
        else if(cnt == 2){
            cout << 1 << endl;
        }
        else{
            cout << 0 << endl;
        }
    }
    return 0;
}