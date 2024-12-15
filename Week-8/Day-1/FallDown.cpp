#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n, m;
        cin >> n >> m;

        vector <string> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }
        
        for(int c = 0; c < m; c++){
            int x = n-1;

            for(int r = n-1; r >= 0; r--){
                if(v[r][c] == '*'){
                    v[r][c] = '.';
                    v[x][c] = '*';
                    x--;
                }

                else if(v[r][c] == 'o'){
                    x = r - 1;
                }
            }
        }

        for(auto x : v){
            cout << x << endl;
        }
    }
    return 0;
}