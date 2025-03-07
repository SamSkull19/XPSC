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
        cin >> n;

        vector <set<int>> v(n);
        string s;
        for(int i=0; i<n; i++){
            cin >> s;

            v[i].insert(i+1);
            for(int j=0; j<n; j++){
                if(s[j] == '1'){
                    v[j].insert(i + 1);
                }
            }
        }
        
        for(int i=0; i<n; i++){
            cout << (int)v[i].size() << " "; 
            for(auto x : v[i]){
                cout << x << " "; 
            }
            cout << endl;
        }
    }   
    return 0;
}