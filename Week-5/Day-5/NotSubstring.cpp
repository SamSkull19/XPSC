#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        int n = s.size();
        string a, b;
        
        for(int i=0; i<n; i++){
            a += "()";
            b += "(";
        }
        for(int i=0; i<n; i++){
            b += ")";
        }

        if(a.find(s) == -1){
            cout << "YES" << endl;
            cout << a << endl;
        }

        else if(b.find(s) == -1){
            cout << "YES" << endl;
            cout << b << endl;
        }

        else{
            cout << "NO" << endl;
        }

    }
    return 0;
}