#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;
    vector <pair <string, string>> p;

    for(int i=0; i<q; i++){
        string a, b;
        cin >> a >> b;
        p.push_back({a, b});
    }

    for(int i = 0; i < p.size(); i++){
        for(int j = i+1; j < p.size(); j++){
            if(p[i].second == p[j].first){
                p[i].second = p[j].second;
                p.erase(p.begin()+j);
                j--;
            }
        }
    }

    cout << p.size() << endl;
    for(auto [x, y] : p){
        cout << x << " " << y << endl;
    }
    return 0;
}