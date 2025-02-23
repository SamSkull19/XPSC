#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

const int N = 1e5 + 5;
vector <int> adjList[N];
vector <bool> visited(N, false);
vector <int> x(N, 0);

void dfs(int s){
    x[s] = 1;
    visited[s] = true;

    for(auto c : adjList[s]){
        if(!visited[c]){
            dfs(c);
            x[s] += x[c];
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

    if(n % 2 != 0){
        cout << -1 << endl;
    }
    else{
        dfs(1);
        int ans = -1;
        for(int i=1; i<=n; i++){
            if(x[i] % 2 == 0){
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}