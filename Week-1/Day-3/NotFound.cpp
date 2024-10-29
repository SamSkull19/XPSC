#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    int p, x = (int)'a';
    char a = '\0';
    for(int i=x; i<x+26; i++){
        p = s.find(i);
        if(p == -1){
            a = (char)i;
            break;
        }
    }

    if(a == '\0') cout << "None" << endl;
    else cout << a << endl;
    return 0;
}