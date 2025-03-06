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
        int n, d, k;
        cin >> n >> d >> k;

        vector <int> v(n + 2, 0);
        for(int i=1; i<=k; i++){
            int x, y;
            cin >> x >> y;

            v[max(1, x - d + 1)]++;
            v[y + 1]--;
        }

        for(int i=1; i<=n; i++){
            v[i] += v[i-1];
        }

        int x = 1, y = 1, mx = -1, mn = INT_MAX;
        for(int i=1; i<=n-d+1; i++){
            if(mn > v[i]){
                mn = v[i];
                y = i;
            }
            if(mx < v[i]){
                mx = v[i];
                x = i;
            }
        }
        cout << x << " " << y << endl;
    }
    return 0;
}