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
        
        string s, r;
        cin >> s >> r;

        if(s == r){
            cout << "YES" << endl;
            continue;
        }

        int pos = -1;
        for(int i=0; i<n; i++){
            if(s[i] == '1'){
                pos = i;
                break;
            }
        }
        
        if(pos != -1){
            bool check = true;
            for(int i=0; i<n; i++){
                if(s[i] != r[i]){
                    if(i < pos){
                        check = false;
                        break;
                    }
                }
            }

            if(check){
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