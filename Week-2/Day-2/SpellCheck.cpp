#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        string s;
        string x = "Timru";
        cin >> s;
        
        sort(s.begin(), s.end());

        if(s == x && n == 5){
            cout << "YES" << endl;
        }

        else{ 
            cout << "NO" << endl;
        }
    }
    return 0;
}