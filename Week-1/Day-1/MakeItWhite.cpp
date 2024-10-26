#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, w = 0;
        cin >> n;

        string s;
        cin >> s;

        for(int i=0; i<n; i++){
            if(s[i] == 'B'){
                break;
            }
            w++;
        }
        for(int i = s.size()-1; i>=0; i--){
            if(s[i] == 'B'){
                break;
            }
            w++;
        }
        cout << s.size() - w << endl;
    }
    return 0;
}