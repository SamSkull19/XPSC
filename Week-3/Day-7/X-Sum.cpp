#include<bits/stdc++.h>
using namespace std;

int n, m;
int getMaxSum(vector <vector <int>> v, int r, int c){
    int sum = v[r][c];
    int x, y;

    x = r - 1, y = c - 1;
    while(x >= 0 && y >= 0){
        sum += v[x--][y--];
    }
    
    x = r + 1, y = c + 1;
    while(x < n && y < m){
        sum += v[x++][y++];
    }
    
    x = r - 1, y = c + 1;
    while(x >= 0 && y < m){
        sum += v[x--][y++];
    }
    
    x = r + 1, y = c - 1;
    while(x < n && y >= 0){
        sum += v[x++][y--];
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
        vector <vector <int>> v(n, vector <int> (m));
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin >> v[i][j];
            }
        }
        
        int mx = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                mx = max(mx, getMaxSum(v, i, j));
            }
        }

        cout << mx << endl;
    }
    return 0;
}