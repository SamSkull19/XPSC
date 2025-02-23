#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

const int N = 1e5 + 5;
vector <int> adjList[N];
vector <int> group(2, 0);
vector <bool> visited(N, false);

void dfs(int x, int g){
    group[g]++;
    visited[x] = true;
    for(auto c : adjList[x]){
        if(!visited[c]){
            dfs(c, g ^ 1);
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    for(int i=1; i<n; i++){
        int u, v;
        cin >> u >> v;

        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    dfs(1, 0);
    ll ans = (1LL * group[0] * group[1] - (n-1));
    cout << ans << endl;
    return 0;
}