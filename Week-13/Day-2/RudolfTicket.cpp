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
        int n, m, k;
        cin >> n >> m >> k;

        vector <int> a(n), b(m);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }        
        for(int i=0; i<m; i++){
            cin >> b[i];
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        int cnt = 0;

        for(int i=0; i<n; i++){
            if(a[i] < k){
                for(int j=0; j<m; j++){
                    if(a[i] + b[j] <= k){
                        cnt++;
                    }
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}