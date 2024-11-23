#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;

        int n = s.size();
        int st = (int)s.front() - 97;
        int ed = (int)s.back() - 97;

        vector <pair<int, int>> v;
        for(int i=0; i<n; i++){
            int a = (int)s[i] - 97;
            v.push_back({a, i+1});
        }

        vector <int> p;
        if(st <= ed){
            for(int i = st; i <= ed; i++){
                for(auto x : v){
                    if(x.first == i){
                        p.push_back(x.second);
                    }
                }
            }
        }
        else{
            for(int i = st; i >= ed; i--){
                for(auto x : v){
                    if(x.first == i){
                        p.push_back(x.second);
                    }
                }
            }
        }

        int cost = abs(st - ed);
        cout << cost << " " << p.size() << endl;
        for(int i : p){
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}