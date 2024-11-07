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

        vector <int> v(n);
        string s;
        vector <pair<int, int>> l;
        vector <pair<int, int>> d;
        set <pair<int, int>> st;

        for(int i=0; i<n; i++){
            cin >> v[i];
        }
        cin >> s;
        int mn = INT_MAX;

        for(int i=0; i<n; i++){
            mn = min(mn, v[i]);

            if(s[i] == '1'){
                l.push_back({v[i], i});
            }

            if(s[i] == '0'){
                d.push_back({v[i], i});
            }
        }

        sort(l.begin(), l.end());
        sort(d.begin(), d.end());

        for(int i=0; i<d.size(); i++){
            d[i].first = mn;
            st.insert({d[i].second, d[i].first});
            mn++;
        }
        
        for(int i=0; i<l.size(); i++){
            l[i].first = mn;
            st.insert({l[i].second, l[i].first});
            mn++;
        }

        for(auto [i, j] : st){
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}