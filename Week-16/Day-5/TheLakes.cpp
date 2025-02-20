#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

const int N = 1e3+5;
int mat[N][N];
bool visited[N][N];
int n, m;
vector <pair<int, int>> d = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

bool check(int i, int j){
    if(i < 0 || i >= n || j < 0 || j >= m) return false;
    return true;
}

int dfs(int x, int y){
    visited[x][y] = true;
    int sum = mat[x][y];

    for(auto [i, j] : d){
        int a = x + i;
        int b = y + j;

        if(check(a, b) && !visited[a][b] && mat[a][b] != 0){
            sum += dfs(a, b);
        }
    }

    return sum;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        cin >> n >> m;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin >> mat[i][j];
            }
        }

        memset(visited, false, sizeof(visited));
        int ans = 0;

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(!visited[i][j] && mat[i][j] > 0){
                    ans = max(ans, dfs(i, j));
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}