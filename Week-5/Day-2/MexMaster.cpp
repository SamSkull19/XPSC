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
        int zero = 0, cnt = 0, mx = 0;
        for(int i=0; i<n; i++){
            cin >> v[i];
            mx = max(mx, v[i]);
            if(v[i] == 0){
                zero++;
            }
            else{
                cnt++;
            }
        }

        if(zero == 0 || zero <= cnt+1){
            cout << 0 << endl;
        }
        else{
            if(mx > 1 || mx == 0){
                cout << 1 << endl;
            }
            else{
                cout << 2 << endl;
            }
        }
    }
    return 0;
}