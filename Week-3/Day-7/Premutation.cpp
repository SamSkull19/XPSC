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

        vector <vector <int>> v(n, vector <int>(n-1));

        for(int i=0; i<n; i++){
            for(int j=0; j<n-1; j++){
                cin >> v[i][j];
            }
        }

        map<int, int> mp1;
        map<int, int> mp2;

        for (int i = 0; i < n; i++){
            mp1[v[i][n - 2]] = i;
            mp2[v[i][n - 2]]++;
        }

        int x = 0, ans;

        for(auto [i, j] : mp2){
            if (j == 1){
                x = i;
            }
            else{
                ans = i;
            }
        }

        for (int i = 0; i < n-1; i++){
            cout << v[mp1[x]][i] << " ";
        }
        cout << ans << endl;
    }
    return 0;
}