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

        string a, b;
        cin >> a >> b;

        bool check = false;

        for(int i=0; i<n; i++){
            if(a[i] == 'R' || b[i] == 'R'){
                if(a[i] != b[i]){
                    check = true;
                }
            }
        }

        if(check){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
    return 0;
}