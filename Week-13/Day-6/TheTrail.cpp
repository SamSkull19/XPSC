#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n, m;
        string s;
        cin >> n >> m;
        cin >> s;

        vector <vector <ll>>v(n, vector <ll>(m));
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin >> v[i][j];
            }
        }

        int x = 0, y = 0;
        for(char c : s){
            if(c == 'D'){
                ll cnt = 0;
                for(int i=0; i<m; i++){
                    cnt += v[x][i];
                }
                v[x][y] = -cnt;
                x++;
            }
            else{
                ll cnt = 0;
                for(int i=0; i<n; i++){
                    cnt += v[i][y];
                }
                v[x][y] = -cnt;
                y++;
            }
        }

        ll cnt = 0;
        for(int i=0; i<m; i++){
            cnt += v[n-1][i];
        }

        v[n-1][m-1] -= cnt;

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cout << v[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}