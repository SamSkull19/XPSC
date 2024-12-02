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

        vector <int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }

        int cnt = 0;
        for(int i=1; i<n; i++){
            if(v[i-1] > v[i]){
                cnt++;
            }
        }
        
        if(cnt > 1 || (cnt == 1 && v[0] < v[n-1])){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
    return 0;
}