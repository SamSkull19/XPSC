#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector <ll> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }

        if(n == 1){
            cout << 0 << endl;
            continue;
        }

        int cnt = 0;
        bool flag = true;

        for(int i=n-1; i>0; i--){
            while(v[i-1] > 0 && v[i-1] >= v[i]){
                v[i-1] /= 2;
                cnt++;
            }

            if(v[i-1] == v[i] || (v[i-1] == 0 && v[i] == 0)){
                flag = false;
                break;
            }
        }
        if(!flag){
            cout << -1 << endl;
        }
        else{
            cout << cnt << endl;
        }
    }
    return 0;
}