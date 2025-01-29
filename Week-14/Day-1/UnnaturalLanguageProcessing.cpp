#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n;
        string s, x;
        cin >> n >> s;

        for(int i=0; i<n; i++){
            if(i > 1){
                if(s[i+1] == 'a' || s[i+1] == 'e'){
                    x.push_back('.');
                }
            }
            x.push_back(s[i]);
        }
        cout << x << endl;
    }
    return 0;
}