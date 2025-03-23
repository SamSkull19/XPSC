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
        
        char a[n][m];
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin >> a[i][j];
            }
        }

        int flag = 1;
        for(int i=1; i<n; i++){
            for(int j=1; j<m; j++){
                if(a[i][j] == '1'){
                    int p = 1, q = 1;

                    for(int x=0; x<=i; x++){
                        p &= (a[x][j] == '1');
                    }
                    
                    for(int x=0; x<=j; x++){
                        q &= (a[i][x] == '1');
                    }

                    flag &= (p || q);
                }
            }
        }

        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}