#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n;
        string s;
        cin >> n >> s;

        int one = 0, zero = 0;
        for(auto c : s){
            if(c == '1'){
                one++;
            }
            if(c == '0'){
                zero++;
            }
        }
        
        int mn = min(one, zero);
        if(mn % 2 == 1){
            cout << "Zlatan" << endl;
        }
        else{
            cout << "Ramos" << endl;
        }
    }
    return 0;
}