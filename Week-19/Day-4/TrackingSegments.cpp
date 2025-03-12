#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;

const int N = 1e5 + 5;
int dp[4 * N];

void build(int n, int b, int e){
    if(b == e){
        dp[n] = 0;
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
        dp[n] = v;
        return;
    }

    int mid = (b + e) / 2;
    int l = 2 * n;
    int r = (2 * n) + 1;

    update(l, b, mid, i, v);
    update(r, mid + 1, e, i, v);
    dp[n] = dp[l] + dp[r];
}

int query(int n, int b, int e, int i, int j){
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

    while(t--){
        int n, m;
        cin >> n >> m;

        vector <pair<int, int>> a(m);
        for(int i=0; i<m; i++){
            cin >> a[i].first >> a[i].second;
        }

        int q;
        cin >> q;
        vector <int> que(q);
        for(int i=0; i<q; i++){
            cin >> que[i];
        }
    
        auto ok = [&](int x){
            build(1, 1, n);

            for(int i=0; i<=x; i++){
                update(1, 1, n, que[i], 1);
            }

            bool found = false;
            for(int i=0; i<m; i++){
                int L = a[i].first, R = a[i].second, seg_len = (R - L) + 1, one, zero;
                one = query(1, 1, n, L, R);
                zero = (seg_len - one);
                if (one > zero) {
                    found = true;
                    break;
                }
            }
            return found;
        };

        int l = 0, r = q-1, mid, ans = -1;
        while(l <= r){
            mid = (l + r)/2;
            if(ok(mid)){
                ans = mid;
                r = mid - 1;
            }
            else{
                l = mid + 1;
            }
        }

        if(ans != -1){
            ans++;
        }
        cout << ans << endl;
    }
    return 0;
}