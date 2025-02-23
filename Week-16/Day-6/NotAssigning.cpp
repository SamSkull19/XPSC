#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

const int N = 1e5 + 10;
vector <pair<int, int>> adjList[N];
bool visited[N];
int ans[N];

void dfs(int x, int y){
    visited[x] = true;

    for(auto [a, b] : adjList[x]){
        if(!visited[a]){
            ans[b] = y;
            dfs(a, y ^ 1);
        }
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

        for(int i=1; i<=n; i++){
            adjList[i].clear();
            visited[i] = false;
        }

        for(int i=1; i<n; i++){
            int u, v;
            cin >> u >> v;

            adjList[u].push_back({v, i});
            adjList[v].push_back({u, i});
        }

        bool flag = true;
        int root = 1;

        for(int i=1; i<=n; i++){
            if(adjList[i].size() > 2){
                flag = false;
                break;
            }
            if(adjList[i].size() == 1){
                root = i;
            }
        }

        if(!flag){
            cout << -1 << endl;
            continue;
        }

        dfs(root, 2);
        for(int i=1; i<n; i++){
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}