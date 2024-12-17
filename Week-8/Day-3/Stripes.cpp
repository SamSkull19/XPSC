#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while(t--){
        string s;
        bool flag = false;
        
        for(int i=1; i<=8; i++){
            cin >> s;

            int x = count(s.begin(), s.end(), 'R');
            if(x == 8){
                flag = true;
            }
        }

        if(flag){
            cout << 'R' << endl;
        }
        else{
            cout << 'B' << endl;
        }
    }
    return 0;
}