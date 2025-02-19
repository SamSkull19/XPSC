#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

const int N = 4e3 + 5;
vector <int> adjList[N];
string s;
int ans = 0;
vector <int> b(N), w(N);

void dfs(int x){
    if(s[x] == 'B'){
        b[x]++;
    }
    else{
        w[x]++;
    }

    for(auto c : adjList[x]){
        dfs(c);
        b[x] += b[c];
        w[x] += w[c];
    }

    if(b[x] == w[x]){
        ans++;
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
            adjList[i].clear();
        }

        b.assign(N, 0);
        w.assign(N, 0);
        ans = 0;
        
        for(int i=2; i<=n; i++){
            int x;
            cin >> x;
            adjList[x].push_back(i);
        }
        
        cin >> s;
        s = " " + s;

        dfs(1);
        cout << ans << endl;
    }
    return 0;
}