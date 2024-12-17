#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;
        
        int n = (int)s.size();
        int zero = 0, one = 0;

        for(int i=0; i<n; i++){
            if(s[i] == '1'){
                one++;
            }
            else{
                zero++;
            }
        }
        
        for(int i=0; i<n; i++){
            if(s[i] == '1'){
                if(zero > 0) zero--;
                else break;
            }
            else{
                if(one > 0) one--;
                else break;
            }
        }

        cout << one + zero << endl;
    }
    return 0;
}