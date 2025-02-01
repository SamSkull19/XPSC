#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
const int N = 1e5 + 5;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, k;
    cin >> n >> m >> k;

    vector <ll> v(N), l(N), r(N), d(N);
    for(int i=1; i<=n; i++){
        cin >> v[i];
    }
    for(int i=1; i<=m; i++){
        cin >> l[i] >> r[i] >> d[i];
    }

    vector <ll> x(N), y(N);
    for(int i=1; i<=k; i++){
        int a, b;
        cin >> a >> b;
        x[a]++;
        x[b+1]--;
    }

    ll sum = 0;
    for(int i=1; i<=m; i++){
        sum += x[i];
        y[l[i]] += sum * d[i];
        y[r[i] + 1] -= sum * d[i];
    }

    sum = 0;
    for(int i=1; i<=n; i++){
        sum += y[i];
        v[i] += sum;
    }

    for(int i=1; i<=n; i++){
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}