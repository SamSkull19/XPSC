#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
const int N = 2e5 + 5;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k, q;
    cin >> n >> k >> q;

    vector <int> d(N);
    vector <int> v(N);

    for(int i=1; i<=n; i++){
        int l, r;
        cin >> l >> r;
        d[l]++;
        d[r + 1]--;
    }

    for(int i=1; i<=N; i++){
        d[i] = d[i-1] + d[i];
        if(d[i] >= k){
            v[i]++;
        }
        v[i] = v[i-1] + v[i];
    }
    
    for(int i=1; i<=q; i++){
        int a, b;
        cin >> a >> b;
        
        int ans = v[b] - v[a-1];
        cout << ans << endl;
    }
    return 0;   
}