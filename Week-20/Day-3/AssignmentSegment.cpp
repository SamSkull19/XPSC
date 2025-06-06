#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

const int N = 1e5 + 10;
ll a[N], dp[N * 4], lazy[4 * N];

void push(int n, int b, int e){
    if(lazy[n] == -1){
        return;
    }

    dp[n] = (1LL * (e - b + 1) * lazy[n]);
    if(b != e){
        int l = 2 * n;
        int r = 2 * n + 1;

        lazy[l] = lazy[n];
        lazy[r] = lazy[n];
    }
    lazy[n] = -1;
}

void build(int n, int b, int e){
    lazy[n] = -1;
    if(b == e){
        dp[n] = a[b];
        return;
    }

    int mid = (b + e) / 2;
    int l = 2 * n;
    int r = 2 * n + 1;

    build(l, b, mid);
    build(r, mid + 1, e);
    dp[n] = dp[l] + dp[r];
}

void update(int n, int b, int e, int i, int j, int v){
    push(n, b, e);
    if(j < b || i > e){
        return;
    }
    if(b >= i && e <= j){
        lazy[n] = v;
        push(n, b, e);
        return;
    }

    int mid = (b + e) / 2;
    int l = 2 * n;
    int r = 2 * n + 1;

    update(l, b, mid, i, j, v);
    update(r, mid + 1, e, i, j, v);
    dp[n] = dp[l] + dp[r];
}

ll query(int n, int b, int e, int i, int j){
    push(n, b, e);
    if(e < i || j < b){
        return 0;
    }
    if(b >= i && e <= j){
        return dp[n];
    }

    int mid = (b + e) / 2;
    int l = 2 * n;
    int r = 2 * n + 1;

    return query(l, b, mid, i, j) + query(r, mid + 1, e, i, j);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    build(1, 1, n);

    while(m--){
        int x;
        cin >> x;

        if(x == 1){
            int l, r, v;
            cin >> l >> r >> v;
            l++;
            update(1, 1, n, l, r, v);
        }
        else{
            int l;
            cin >> l;
            l++;
            ll ans = query(1, 1, n, l, l);
            cout << ans << endl;
        }
    }
    return 0;
}