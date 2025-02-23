#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

const int N = 1e6 + 10;
vector <int> adjList[N];
vector <bool> visited(N, false);
vector <int> cat(N);
int n, m, ans = 0;

void dfs(int x, int cnt){
    visited[x] = true;

    if(cat[x] == 1) cnt++;
    else cnt = 0;

    if(cnt > m) return;
    if(adjList[x].size() == 1 && x != 1){
        ans++;
        return;
    }

    for(auto c : adjList[x]){
        if(!visited[c]){
            dfs(c, cnt);
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    for(int i=1; i<=n; i++){
        cin >> cat[i];
    }

    for(int i=1; i<n; i++){
        int u, v;
        cin >> u >> v;

        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    
    dfs(1, 0);
    cout << ans << endl;
    return 0;
}