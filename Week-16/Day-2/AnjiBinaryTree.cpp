#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

const int N = 3e5 + 9;
vector <int> v[N], x(N);
string s;

void dfs(int a){
    if(v[a][0] != 0){
        int b = v[a][0];
        
        if(s[a - 1] != 'L'){
            x[b] = x[a] + 1;
        }

        else{
            x[b] = x[a];
        }

        dfs(b);
    }

    if(v[a][1] != 0){
        int b = v[a][1];
        
        if(s[a - 1] != 'R'){
            x[b] = x[a] + 1;
        }

        else{
            x[b] = x[a];
        }

        dfs(b);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        for(int i=0; i<=n; i++){
            v[i].clear();
            x[i] = 0;
        }

        cin >> s;
        for(int i=1; i<=n; i++){
            int l, r;
            cin >> l >> r;
            v[i].push_back(l);
            v[i].push_back(r);
        }

        dfs(1);
        int ans = INT_MAX;
        for(int i=1; i<=n; i++){
            if(v[i][0] == 0 && v[i][1] == 0){
                ans = min(ans, x[i]);
            }
        }

        cout << ans << endl;
    }
    return 0;
}