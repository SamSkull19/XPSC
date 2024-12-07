#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    int n = (int)s.size();
    int r = 0;
    string x;

    while(r < n){
        if(s.substr(r, 3) == "WUB"){
            r += 3;
            if(!x.empty() && x.back() != ' '){
                x += ' ';
            }
        }
        else{
            x += s[r];
            r++;
        }
    }
    cout << x << endl;
    return 0;
}