#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

const int N = 2e5 + 10;
vector <int> adjList[N];
vector <int> a(N, 0);
bool visited[N];

void dfs(int x){
    visited[x] = true;

    if(adjList[x].size() == 1 && x != 1){
        a[x] = 1;
    }

    for(auto c : adjList[x]){
        if(!visited[c]){
            dfs(c);
            a[x] += a[c];
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

        set <int> s;
        for(int i=1; i<n; i++){
            int u, v;
            cin >> u >> v;

            adjList[u].push_back(v);
            adjList[v].push_back(u);

            s.insert(u);
            s.insert(v);
        }

        memset(visited, false, sizeof(visited));
        dfs(1);
        int q;
        cin >> q;

        while(q--){
            int x, y;
            cin >> x >> y;

            cout << (1LL * a[x] * a[y]) << endl;
        }

        a.assign(N, 0);
        for(auto x : s){
            adjList[x].clear();
        }
        s.clear();
    }
    return 0;
}