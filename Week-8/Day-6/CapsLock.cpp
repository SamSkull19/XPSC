#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    int n = (int)s.size();
    int cnt = 0;
    for(char c : s){
        if(c >= 'A' && c <= 'Z'){
            cnt++;
        }
    }

    if(cnt == n){
        for(int i=0; i<n; i++){
            s[i] += 32;
        }
    }    
    
    if(cnt == n - 1){
        if(s[0] >= 'a' && s[0] <= 'z'){
            s[0] -= 32;
            for(int i=1; i<n; i++){
                s[i] += 32;
            }
        }
    }

    cout << s << endl;
    return 0;
}
