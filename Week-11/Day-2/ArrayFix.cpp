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

        bool flag = true;
        for(int i=n-2; i>=0; i--){
            if(v[i] > v[i+1]){
                int a = v[i] / 10;
                int b = v[i] % 10;

                if(a > b){
                    flag = false;
                }
                if(b > v[i+1]){
                    flag = false;
                }
                else{
                    v[i] /= 10;
                }
            }
        }
        
        if(flag){
            cout << "YES" << endl;
        }

        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}