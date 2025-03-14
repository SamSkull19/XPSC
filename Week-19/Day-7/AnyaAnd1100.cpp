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
        string s;
        cin >> s;

        s = " " + s;
        int n = (int)s.size();
        set <int> st;

        for(int i=1; i<=n-4; i++){
            if(s[i] == '1' && s[i+1] == '1' && s[i+2] == '0' && s[i+3] == '0'){
                st.insert(i);
            }
        }

        int q;
        cin >> q;

        while(q--){
            int x;
            char c;
            cin >> x >> c;
            s[x] = c;
            
            int l = max(1, x-3);
            int r = min(n-4, x);

            for(int i=l; i<=r; i++){
                if(s[i] == '1' && s[i+1] == '1' && s[i+2] == '0' && s[i+3] == '0'){
                    st.insert(i);
                }
                else{
                    st.erase(i);
                }
            }
            
            if(st.size() > 0) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    return 0;
}