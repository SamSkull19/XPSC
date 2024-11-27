#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n, k;
        cin >> n >> k;
        
        vector <ll> v(k);
        for(int i=0; i<k; i++){
            cin >> v[i];
        }

        bool flag = true;
        ll m = v[k-1] - v[k-2];

        for(int i=k-2; i>0; i--){
            if(v[i] - v[i-1] > m){
                flag = false;
                break;
            }
            else{
                m = v[i] - v[i-1];
            }
        }

        if(k == 1){
            cout << "YES" << endl;
        }

        else if(flag){
            ll s = 0;
            s = (n - k + 1) * m;

            if(s >= v[0]){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
        
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}