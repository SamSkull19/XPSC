#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n;
        char c;
        cin >> n >> c;

        string s;
        cin >> s;
        s += s;
        
        int mx = 0, p = 0;
        int x = s.size();

        for(int i = x-2; i>=0; i--){
            if(s[i] == 'g'){
                p = 0;
            }
            if(s[i] == c){
                mx = max(mx, p);
            }
            p++;
        }
        cout << mx << endl;
    }
    return 0;
}