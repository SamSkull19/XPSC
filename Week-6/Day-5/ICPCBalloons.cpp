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

        set <char> st;
        for(char c : s){
            st.insert(c);
        }
        cout << s.size() + st.size() << endl;
    }
    return 0;
}