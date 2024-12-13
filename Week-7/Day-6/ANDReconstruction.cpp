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
        
        vector <int> v(n-1);
        vector <int> ans(n);

        for(int i=0; i<n-1; i++){
            cin >> v[i];
        }

        ans[0] = v[0];
        ans[n-1] = v[n-2];

        for(int i=1; i<n-1; i++){
            ans[i] = v[i-1] | v[i];
        }

        bool flag = true;
        for(int i=0; i<n-1; i++){
            if((ans[i] & ans[i + 1]) != v[i]){
                flag = false;
                break;
            }
        }

        if(flag){
            for(auto i : ans){
                cout << i << " ";
            }
        }
        else{
            cout << -1;
        }
        cout << endl;
    }
    return 0;
}