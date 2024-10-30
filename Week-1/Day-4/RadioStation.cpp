#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector <pair <string, string>> a(n);
    vector <pair <string, string>> b(m);
    
    for(int i=0; i<n; i++){
        cin >> a[i].first >> a[i].second;
    }
    
    for(int i=0; i<m; i++){
        cin >> b[i].first >> b[i].second;
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(b[i].second == (a[j].second+';')){
                cout << b[i].first << " " << b[i].second << " #" << a[j].first << endl;
            }
        }
    }

    return 0;
}