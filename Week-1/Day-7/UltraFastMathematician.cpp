#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a, b, s;
    cin >> a >> b;

    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]){
            s.push_back('1');
        }
        else{
            s.push_back('0');
        }
    }
    cout << s << endl;
    return 0;
}