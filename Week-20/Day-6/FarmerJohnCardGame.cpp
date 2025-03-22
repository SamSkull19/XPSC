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
        cin >> n >> m;

        int a[n][m], x[n * m + 5];
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin >> a[i][j];
                x[a[i][j]] = i + 1;
            }
        }

        int flag = 1;
        for(int i=0; i<n; i++){
            int p = x[i];
            for(int j=i + n; j<n * m; j+=n){
                if(p != x[j]){
                    flag = 0;
                    break;
                }
            }
            if(!flag) break;
        }

        if(!flag){
            cout << -1 << endl;
        }
        else{
            for(int i=0; i<n; i++){
                cout << x[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}