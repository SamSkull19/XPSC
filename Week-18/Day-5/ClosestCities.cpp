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
        int n;
        cin >> n;

        vector <int> v(n), l(n), r(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }

        for(int i=1; i<n; i++){
            l[i] = v[i] - v[i-1];
            r[i] = v[i] - v[i-1];
        }

        for(int i=1; i<n-1; i++){
            if(v[i] - v[i-1] < v[i+1] - v[i]){
                r[i] = 1;
            }
            else{
                l[i+1] = 1;
            }
        }

        l[1] = 1;
        r[n-1] = 1;
        for(int i=1; i<n; i++){
            l[i] += l[i-1];
            r[i] += r[i-1];
        }

        int q;
        cin >> q;

        while(q--){
            int x, y;
            cin >> x >> y;
            x--;
            y--;
            if(x < y){
                cout << l[y] - l[x] << endl;
            }
            else{
                cout << r[x] - r[y] << endl;
            }
        }
    }
    return 0;
}