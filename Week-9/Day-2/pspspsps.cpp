#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n;
        string s;
        cin >> n >> s;

        map <char, int> mp;
        for(int i=0; i<n; i++){
            mp[s[i]]++;
        }

        if(mp['p'] == 0 || mp['s'] == 0){
            cout << "YES" << endl;
        }
        else if(mp['p'] == 1 && s.back() == 'p'){
            cout << "YES" << endl;
        }
        else if(mp['s'] == 1 && s.front() == 's'){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}