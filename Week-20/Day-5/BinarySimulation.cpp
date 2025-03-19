#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

const int N = 1e5 + 10;
int a[N], dp[N * 4], lazy[N * 4];

void push(int n, int b, int e){
    if(lazy[n] == 0){
        return;
    }

    dp[n] = (e - b + 1) - dp[n];
    if(b != e){
        int l = 2 * n;
        int r = 2 * n + 1;

        lazy[l] ^= 1;
        lazy[r] ^= 1;
    }
    lazy[n] = 0;
}

void build(int n, int b, int e){
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

void update(int n, int b, int e, int i, int j){
    push(n, b, e);
    if(j < b || i > e){
        return;
    }
    if(b >= i && e <= j){
        lazy[n] ^= 1;
        push(n, b, e);
        return;
    }

    int mid = (b + e) / 2;
    int l = 2 * n;
    int r = 2 * n + 1;

    update(l, b, mid, i, j);
    update(r, mid + 1, e, i, j);
    dp[n] = dp[l] + dp[r];
}

int query(int n, int b, int e, int i){
    push(n, b, e);
    if(b == e){
        return dp[n];
    }

    int mid = (b + e) / 2;
    int l = 2 * n;
    int r = 2 * n + 1;

    if(i <= mid){
        return query(l, b, mid, i);
    }
    else{
        return query(r, mid + 1, e, i);
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;

    for(int t=1; t<=tc; t++){
        string s;
        cin >> s;

        s = " " + s;
        int n = (int)s.size();
        for(int i=1; i<=n; i++){
            a[i] = s[i] - '0';
        }

        build(1, 1, n);
        int q;
        cin >> q;

        cout << "Case " << t << ":" << endl;
        while(q--){
            char c;
            cin >> c;

            if(c == 'I'){
                int l, r;
                cin >> l >> r;
                update(1, 1, n, l, r);
            }
            else{
                int l;
                cin >> l;
                int ans = query(1, 1, n, l);
                cout << ans << endl;
            }
        }
    }
    return 0;
}