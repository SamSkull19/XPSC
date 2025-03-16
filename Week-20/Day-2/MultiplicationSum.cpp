#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

const int N = 1e5 + 10;
ll a[N], dp[N * 4], lazy[N * 4], MOD = 1e9 + 7;

void push(int n, int b, int e){
    if(lazy[n] == 1){
        return;
    }

    dp[n] = (1LL * dp[n] * lazy[n]) % MOD;
    if(b != e){
        int l = 2 * n;
        int r = 2 * n + 1;

        lazy[l] = (1LL * lazy[l] * lazy[n]) % MOD;
        lazy[r] = (1LL * lazy[r] * lazy[n]) % MOD;
    }
    lazy[n] = 1;
}

ll merge(ll l, ll r){
    return (l + r) % MOD;
}

void build(int n, int b, int e){
    lazy[n] = 1;
    if(b == e){
        dp[n] = 1;
        return;
    }

    int mid = (b + e) / 2;
    int l = 2 * n;
    int r = 2 * n + 1;

    build(l, b, mid);
    build(r, mid + 1, e);
    dp[n] = merge(dp[l], dp[r]);
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
    dp[n] = merge(dp[l], dp[r]);
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

    return merge(query(l, b, mid, i, j), query(r, mid + 1, e, i, j));
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
            int l, r;
            cin >> l >> r;
            l++;
            ll ans = query(1, 1, n, l, r);
            cout << ans << endl;
        }
    }
    return 0;
}