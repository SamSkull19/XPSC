#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    set <char> s;
    char c;
    while(c != '}'){
        cin >> c;
        if(c >= 'a' && c <= 'z'){
            s.insert(c);
        }
    }
    
    cout << (int)s.size() << endl;
    return 0;
}