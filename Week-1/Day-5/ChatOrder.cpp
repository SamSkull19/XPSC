#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    map <string, int> mp;
    stack <string> st;

    for(int i=0; i<n; i++){
        string s;
        cin >> s;
        st.push(s);
    }

    while(!st.empty()){
        string x = st.top();
        st.pop();

        if(mp[x] == 0) 
            cout << x << endl;
        mp[x]++;
    }
    return 0;
}