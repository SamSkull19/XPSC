#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    while(n--){
        string s;
        cin >> s;
        
        int x = s.size()-1;
        int c = 1;
        
        while(x--){
            if(s[c-1] == s[c]){
                break;
            }
            c++;
        }

        if(s[c-1] == 'a'){
            s.insert(c, 1, 'b');
        }

        else{
            s.insert(c, 1, 'a');
        }
        cout << s << endl;
    }
    return 0;
}