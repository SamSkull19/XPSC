#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector <vector<int>> v(n, vector<int>(n));
        int x = 1, y = n*n;
        bool rev = false;

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(rev){
                    v[i][j] = x;
                    x++;
                }
                else{
                    v[i][j] = y;
                    y--;
                }
                rev = !rev;
            }
            if(i % 2 == 1){
                reverse(v[i].begin(), v[i].end());
            }
        }

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cout << v[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}