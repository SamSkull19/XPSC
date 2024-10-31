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

        set <char> st;
        string s;
        cin >> s;
        
        for(int i=0; i<n; i++){
            st.insert(s[i]);
        }

        string r;
        for(auto i : st){
            r.push_back(i);
        }

        int x = r.size()-1;
        map <char, char> mp;
        
        for(int i=0; i < r.size(); i++){
            mp[r[i]] = r[x];
            x--;
        }
        
        for(char i : s){
            cout << mp[i];
        }
        cout << endl;
    }
    
    return 0;
}