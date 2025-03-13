#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

const int N = 1e5 + 5;
ll a[N], dp[4 * N];

void build(int n, int b, int e){
    if(b == e){
        dp[n] = a[b];
        return;
    }

    int mid = (b + e) / 2;
    int l = 2 * n;
    int r = (2 * n) + 1;

    build(l, b, mid);
    build(r, mid + 1, e);
    dp[n] = dp[l] + dp[r];
}

void update(int n, int b, int e, int i, int v){
    if(i < b || i > e){
        return;
    }
    if(b == e){
        dp[n] += v;
        return;
    }

    int mid = (b + e) / 2;
    int l = 2 * n;
    int r = (2 * n) + 1;

    update(l, b, mid, i, v);
    update(r, mid + 1, e, i, v);
    dp[n] = dp[l] + dp[r];
}

int donate(int n, int b, int e, int i){
    if(b == e){
        int x = dp[n];
        dp[n] = 0;
        return x;
    }

    int mid = (b + e) / 2;
    int l = 2 * n;
    int r = (2 * n) + 1;

    ll ans = 0;
    if(i <= mid){
        ans = donate(l, b, mid, i);
    }
    else{
        ans = donate(r, mid + 1, e, i);
    }
    dp[n] = dp[l] + dp[r];
    return ans;
}

ll query(int n, int b, int e, int i, int j){
    if(e < i || b > j){
        return 0;
    }
    if(b >= i && e <= j){
        return dp[n];
    }

    int mid = (b + e) / 2;
    int l = 2 * n;
    int r = (2 * n) + 1;

    return query(l, b, mid, i, j) + query(r, mid + 1, e, i, j);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    for(int tc = 1; tc <= t; tc++){
        int n, m;
        cin >> n >> m;

        for(int i=1; i<=n; i++){
            cin >> a[i];
        }
        build(1, 1, n);
    
        cout << "Case " << tc << ":" << endl;
        while(m--){
            int x;
            cin >> x;
        
            if(x == 1){
                int i;
                cin >> i;
                i++;
                ll ans = donate(1, 1, n, i);
                cout << ans << endl;
            }
            else if(x == 2){
                int idx, v;
                cin >> idx >> v;
                idx++;
                update(1, 1, n, idx, v);
            }
            else{
                int l, r;
                cin >> l >> r;
                l++;
                r++;
                ll ans = query(1, 1, n, l, r);
                cout << ans << endl;
            }
        }
    }
    return 0;
}